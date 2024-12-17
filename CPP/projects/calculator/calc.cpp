#include <iostream>

using namespace std;

void addNums(int &int1, int &int2, int &int3)
{
  int3 = int1 + int2;
}
void subNums(int &int1, int &int2, int &int3)
{
  int3 = int1 - int2;
}
void multNums(int &int1, int &int2, int &int3)
{
  int3 = int1 * int2;
}
void divNums(int &int1, int &int2, int &int3)
{
  int3 = int1 / int2;
}

int main()
{
  int int1, int2, int3;
  char op;
  cout << "enter num1: ";
  cin >> int1;
  cout << "enter operator: ";
  cin >> op;
  cout << "enter num2: ";
  cin >> int2;

  switch (op)
  {
    case('+'):
      addNums(int1, int2, int3);
      break;
    case('-'):
      subNums(int1, int2, int3);
      break;
    case('*'):
      multNums(int1, int2, int3);
      break;
    case('/'):
      divNums(int1, int2, int3);
      break;
    default:
      cout << "invalid operator\n";
      break;
  }

  cout << "\nresult: " << int3;

  return 0;
}
