#include <stdio.h>
#include <stdlib.h>

using Byte = unsigned char;
using Word = unsigned short;
using u32 = unsigned int;

struct Mem
{
    static constexpr u32 MAX_MEM = 1024 * 64;
    Byte Data[MAX_MEM];

    void Initialize()
    {
        for (u32 i = 0; i < MAX_MEM; i++)
        {
            Data[i] = 0;
        }
    }

    // read 1 byte
    Byte operator[](u32 Address) const
    {
        // assert mem address < MAX_MEM
        return Data[Address];
    }

    // write 1 byte
    Byte &operator[](u32 Address)
    {
        // assert mem address < MAX_MEM
        return Data[Address];
    }
};

struct CPU
{
    Word PC; // program counter
    Word SP; // stack pointer

    Byte A, X, Y; // registers
    Byte C : 1;   // status flag
    Byte Z : 1;   // status flag
    Byte I : 1;   // status flag
    Byte D : 1;   // status flag
    Byte B : 1;   // status flag
    Byte V : 1;   // status flag
    Byte N : 1;   // status flag

    void Reset(Mem &memory)
    {
        PC = 0xFFFC;
        SP = 0x100;
        C = Z = I = D = B = V = N = 0;
        A = X = Y = 0;
        memory.Initialize();
    }

    Byte FetchByte(u32 &Cycles, Mem &memory)
    {
        Byte Data = memory[PC];
        PC++;
        Cycles--;
        return Data;
    }

    Byte ReadByte(u32 &Cycles, Byte Address, Mem &memory)
    {
        Byte Data = memory[Address];
        Cycles--;
        return Data;
    }

    // opcode
    static constexpr Byte
        INS_LDA_IM = 0xA9,
        INS_LDA_ZP = 0xA5;

    void LDASetStatus()
    {
        Z = (A == 0);
        N = (A & 0b10000000) > 0;
    }

    void Execute(u32 Cycles, Mem &memory)
    {
        while (Cycles > 0)
        {
            Byte Ins = FetchByte(Cycles, memory);
            switch (Ins)
            {
            case INS_LDA_IM:
            {
                Byte Value = FetchByte(Cycles, memory);
                A = Value;
                LDASetStatus();
            }
            break;
            case INS_LDA_ZP:
            {
                Byte ZeroPageAddr = FetchByte(Cycles, memory);
                A = ReadByte(Cycles, ZeroPageAddr, memory);
                LDASetStatus();
            }
            break;
            default:
                printf("instruction not handled%d", Ins);
                break;
            }
        }
    }
};

int main()
{
    Mem mem;
    CPU cpu;
    cpu.Reset(mem);
    // inline tiny program
    mem[0xFFFC] = CPU::INS_LDA_ZP;
    mem[0xFFFD] = 0x42;
    mem[0x0042] = 0x84;
    cpu.Execute(3, mem);

    return 0;
}