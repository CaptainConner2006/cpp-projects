#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
//template <typename T , typename U>

/*typedef
typedef std::vector<std::pair<std::string,int>> pairlist_t;
//typedef std::string text_t;
//typedef int int_t;

using text_t = std::string;
using int_t = int;
*/

/*namespaces
namespace sigma{
        int x = 2;
    }
    */

//void sigma(int num);

//double square(double len);
//double cube(double len);

//string mergeStrings(string x, string y);

/*overloaded functions
void bakeSigma(){
    cout << "here is ur sigma";
}
void bakeSigma(string alpha1){
    cout << "here is ur sigma " << alpha1;
}
void bakeSigma(string alpha1, string alpha2){
    cout << "here is ur sigma " << alpha1 << " " << alpha2;
}
*/

/*int num = 233;

void printNum(){
    int num = 245;
    cout << ::num;
}
*/

/*bank funcs
double deposit(double balance){
    double amount = 0;
    cout << "enter amount: ";
    cin >> amount;
    if(amount <= 0){
        cout << "invalid amount";
        return 0;
    } else {
    cout << "new balance: $" << std::setprecision(2) << std::fixed << balance + amount;
    }
    return amount;
}
double withdraw(double balance){
    double amount;
    cout << "enter amount: ";
    cin >> amount;
    if(amount <= 0){
        cout << "invalid amount";
        return 0;
    } else if(amount > balance){
        cout << "insufficient funds";
        return 0;
    } else {
    cout << "new balance: $" << std::setprecision(2) << std::fixed << balance - amount;
    }
    return amount;
}
*/

/*pass array to func
double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}
*/

/*search array for element
int searchArray(string array[], int size, string element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}
*/

/*important template for bubble sorting
void sortArr(int arr[], int size){
    int temp; //temporarily store value to push back(bubble)
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                //swapping values
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
*/

/*pass by reference
void swap(string &cup1, string &cup2){
    string temp = cup1;
    cup1 = cup2;
    cup2 = temp;
}
*/

/*const parameters
void printInfo(const string name, const int age){
    cout << name << endl;
    cout << age << endl;
}
*/

/*luhn algorithm
int getDigit(const int num){
    return num % 10 + (num / 10 % 10);
}
int sumOddDigits(const string cardNum){
    int sum = 0;

    for(int i = cardNum.size() - 1; i >= 0; i-=2){
        sum += cardNum[i] - '0';
    }

    return sum;
}
int sumEvenDigits(const string cardNum){
    int sum = 0;

    for(int i = cardNum.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNum[i] - '0') * 2);
    }

    return sum;
}
*/

/*tic tac toe functions
void drawBoard(char *spaces){
    cout << "     |     |     " << endl;
    cout << "  " << spaces [0] << "  |  " << spaces [1] << "  |  " << spaces [2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces [3] << "  |  " << spaces [4] << "  |  " << spaces [5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces [6] << "  |  " << spaces [7] << "  |  " << spaces [8] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << endl;
}
void playerMove(char *spaces, char player){
    int number;
    do{
        cout << "enter spot to place marker(1-9)\n";
        cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8);
}
void computerMove(char *spaces, char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer){
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? cout << "u win\n" : cout << "u lose\n";
    }else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? cout << "u win\n" : cout << "u lose\n";
    }else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? cout << "u win\n" : cout << "u lose\n";
    }else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? cout << "u win\n" : cout << "u lose\n";
    }else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player ? cout << "u win\n" : cout << "u lose\n";
    }else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? cout << "u win\n" : cout << "u lose\n";
    }else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? cout << "u win\n" : cout << "u lose\n";
    }else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? cout << "u win\n" : cout << "u lose\n";
    }else{
        return false;
    }

    return true;
}
bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    cout << "tie\n";
    return true;
}
*/

/*recursion
void walk(int steps){
    if(steps > 0){
        cout << "u take a step\n";
        walk(steps - 1); //recursive approach
    }
}

int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }else{
        return 1;
    }
}
*/

/*function template
auto max(T x, U y){
    return (x > y) ? x : y;
}
*/
/*struct outside main
struct student{
    string name;
    double gpa;
    bool enrolled;
};
*/

/*pass structs as argument
struct Car{
    string name;
    int year;
    string color;
};

void printCar(Car &car){
	cout << &car << endl;
    cout << car.name << endl;
    cout << car.year << endl;
    cout << car.color << endl << endl;
}
void paintCar(Car &car, string color){
	car.color = color;
}
*/

/*enumerator
enum Day {
	monday = 0,
	tuesday = 1,
	wednesday = 2
};
*/

/*oop classes + methods
class Sigma{
	public:
		string name;
		int aura;
		
		void edge(){
			cout << "this person is edging\n";
		}
		void drinkBeer(){
			cout << "get me another beer!\n";
		}
		void grind(){
			cout << "on the grind all day every day\n";
		}
		void song(){
			cout << "sigma sigma on the wall, who's the skibidiest of them all? its you yes its you!";
		}
};
*/

class Car{
	public:
		string make;
		string model;
		int year;
		string color;
		
		void drive(){
			cout << "i drive.";
		}
		void drive2(){
			cout << "i drive..";
		}
		void brake(){
			cout << "hou je bek chris";
		}
};

int main()
{
	//OOP oooo yeahhhhhhh
	Car car1;
	Car car2;
	
	car1.make = "ryan";
	car1.model = "gosling";
	car1.year = 2011;
	car1.color = "theres something inside you, that i cant explain";
	
	car2.make = "ryan2";
	car2.model = "gosling2";
	car2.year = 2012;
	car2.color = "theres something inside you, that i cant explain2";
	
	cout << car1.make << endl;
	cout << car1.model << endl;
	cout << car1.year << endl;
	cout << car1.color << endl;
	
	car1.drive();
	car1.drive2();
	car1.brake();
	
	/*
	Sigma alpha1;
	
	alpha1.name = "chad";
	alpha1.aura = 1000000;
	
	cout << "name: " << alpha1.name << endl;
	cout << "aura level: " << alpha1.aura << endl;
	
	alpha1.song();
	*/
	
	/*enumerations (i like this alot)
	Day today = tuesday;
	
	switch(today){
		case monday: cout << "today is monday" << endl;
		break;
		case tuesday: cout << "today is tuesday" << endl;
		break;
		case wednesday: cout << "today is wednesday" << endl;
		break;
	}
	*/
	
    /*pass struct as argument
    Car car1;
    Car car2;

    car1.name = "kitten";
    car1.year = 1999;
    car1.color = "black";
    
    car2.name = "smitten";
    car2.year = 2999;
    car2.color = "white";
    
    paintCar(car1, "blue");
    paintCar(car2, "red");
    
    cout << &car1 << endl;
    printCar(car1);
    cout << &car2 << endl;
    printCar(car2);
    */

    /*struct
    student student1;
    student1.name = "name";
    student1.gpa = 4.0;
    student1.enrolled = true;

    student student2;
    student2.name = "name2";
    student2.gpa = 5.0;
    student2.enrolled = false;

    cout << student1.name << endl;
    cout << student1.gpa << endl;
    cout << student1.enrolled << endl;
    
    cout << student2.name << endl;
    cout << student2.gpa << endl;
    cout << student2.enrolled << endl;
    */

    /*function templates (wow so efficient handy and cool)
    cout << max(1, 2.1) << endl;
    */

    /*recursion (iterative vs recursive) helpful with sorting functions
    cout << factorial(10);

    walk(100);
    */

    //dynamic memory == memory allocated after program if you dont know how much memory ull need
    /*example 1
    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    cout << "address\n" << pNum << endl;
    cout << "value\n" << *pNum << endl;

    delete pNum;
    */
    /*example 2
    char *pGrades = NULL;
    int size;

    cout << "how many grades to enter: \n";
    cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        cout << "enter grade number " << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        cout << pGrades[i] << endl;
    }
    delete[] pGrades;
    */

    /*tic tac toe
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', };
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }else if(checkTie(spaces)){
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    cout << "thx for playing";
    */

    /*null pointers (careful with these)
    int *ptr = nullptr;
    int x = 123;

    //ptr = &x;

    if(ptr == nullptr){
        cout << "no address found in ptr" << endl;
        cout << *ptr;
    }else{
        cout << "assigned address" << endl;
    }
    */

    /*pointers(super cool yey)
    string pizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    string *pizzaPtr = pizzas;

    cout << *pizzaPtr << endl;
    */

    //credit card validator program
    /*luhn algorithm
    1. double every second digit from right to left. if doubled digit is 2 digits big, split them (12 = 1 2)
    2. add all single digits from step 1
    3. add all odd numbered digits from right to left
    4. sum results from steps 2 & 3
    5. if step 4 divible by 10, # is valid
    

    string cardNum;
    int result = 0;

    cout << "enter cardnumber\n";
    cin >> cardNum;

    result = sumEvenDigits(cardNum) + sumOddDigits(cardNum);

    if(result % 10 == 0){
        cout << cardNum << " is valid\n";
    }else{
        cout << " cardNum is not valid\n";
    }
    */

    /*const parameters (const makes value read-only)
    string name = "Sigma";
    int age = 18;

    printInfo(name, age);
    */

    /*pass by reference
    string cup1 = "white monster";
    string cup2 = "also white monster";

    swap(cup1, cup2);


    cout << "cup1 " << cup1 << endl;
    cout << "cup2 " << cup2 << endl;
    */

    /*memory addresses
    string name = "Sigma";
    int age = 18;
    bool student = true;

    cout << &name << endl;
    cout << &age << endl;
    cout << &student << endl;
    */

    /*multidimensional arrays (wtf is dit)
    //array [rows][columns]
    string foods[][3] = {
    {"vanille ijs", "banaan ijs", "straciatella ijs"},
    {"fufu", "roti", "kip en rijst"},
    {"sushi", "noodles", "dumplings"}};

    int rows = sizeof(foods)/sizeof(foods[0]);
    int columns = sizeof(foods[0])/sizeof(foods[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << foods[i][j] << endl;
        }
        cout << endl;
    }
    */

    /*multidimensional arrays pt2
    cout << "ijs smaken:" << endl;
    for(string food : foods[0]){
        cout << food << endl;
    }

    cout << "\n";

    cout << "suri foodie:" << endl;
    for(string food : foods[1]){
        cout << food << endl;
    }

    cout << endl;

    cout << "jappie foods" << endl;
    for(string food : foods[2]){
        cout << food << endl;
    }
    */

    /*fill array with user input
    string arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    string temp;

    for(int i = 0; i < size; i++){
        cout << "enter element (type q to quit) #" << i << ": ";
        getline(cin, temp);
        if(temp == "q"){
            break;
        }else{
            arr[i] = temp;
        }
    }

    cout << "elements: \n";

    for(string element : arr){
        cout << element << endl;
    }
    */

    /*fill() function
    int size = 99;
    string arr[size];

    fill(arr, arr + (size / 3), "sigma");
    fill(arr + (size / 3), arr + (size / 3) * 2, "chad");
    fill(arr + (size / 3) * 2, arr + (size), "cornelius");

    for(string element : arr){
        cout << element << " ";
    }
    */

    /*bubble sorting (very useful!!!)
    int arr[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    sortArr(arr, size);

    for(int element : arr){
        cout << element << " ";
    }
    */

    /*search array for an element (very important!!!)
    string foods[] = {"apple", "banana", "kebab", "pizza"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    string food;

    cout << "enter food: ";
    cin >> food;

    index = searchArray (foods, size, food);

    if(index != -1){
        cout << food << " is at index " << index;
    }else{
        cout << "food not in array";
    }
    */

    /*pass array to func
    double prices[] = {1.1, 2.2, 3.3, 4.4};
    int size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, size);

    cout << total;
    */

    /*foreach loop (so simple so handy)
    string names[] = {"sigma", "chad", "cornelius"};

    for(string name : names){
        cout << name << endl;
    }
    */

    /*iterate over an array (too ez)
    string names[] = {"sigma", "chad", "cornelius"};

    for(int i = 0; i < sizeof(names)/sizeof(string); i++){
        cout << names[i] << endl;
    }
    */

    /*sizeof() operator
    char grades[] = {'A', 'B', 'C', 'D', 'F', 'E'};
    string names[] = {"sigma", "chad", "cornelius"};

    cout << sizeof(grades)/sizeof(char);//sizeof array elements wowowow
    */

    /*arrays
    string car[] = {"honda", "mercedes", "toyota", "ford"};
    car[0] = "bmw";

    cout << car[0];
    */

    /*banking brogram
    double balance;
    int choice;

    do{
        cout << "\nchoose\n1. deposit\n2. withdraw\n3. check balance\n4. quit\n";
        cin >> choice;
        std::cin.clear();
        std::fflush(stdin);

    switch(choice){
        case 1:
            balance += deposit(balance);
            break;
        case 2:
            balance -= withdraw(balance);
            break;
        case 3:
            cout << "balance: $" << std::setprecision(2) << std::fixed <<balance;
            break;
        case 4:
            break;
        default:
            cout << "invalid choice";
            break;
    }
    }while(choice != 4);
    */
    
    /*local variable: inside funcs
    //global variable: outside all funcs
    printNum();
    */

    /*overloaded functions
    bakeSigma("chad", "cornelius");
    */
    
    /*return keywords
    string NameFirst = "sigma";
    string NameLast = "reginald";
    string NameFull = mergeStrings(NameFirst, NameLast);

    cout << NameFull;

    double len = 10.0;
    double area = square(len);
    double volume = cube(len);

    cout << area << endl << volume;
    */

    /*user defined functions
    int num = 5;
    sigma(num);
    */

    /*pseudo random num gen
    srand(time(NULL));
    int num = (rand() % 100) + 1;

    cout << num;
    */

    /*nested loops
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            cout << j << ' ';
        }
        cout << endl;
    }
    */

    /*for loops + continue
    for(int i = 1; i <= 10; i++){
        if(i == 1 ||i == 2 || i == 3 || i == 4 || i == 5 || i == 6){
            continue;
        }
        cout << i << endl;
    }
    */

    /*break loop
    for(int i = 1; i < 10; i++){
        cout << i;
        if(i == 5){
            break;
        }
    }
    */

    /*for loops
    string name = "sigma";
    for(int i = 0; i < name.size(); i++){
        cout << name[i] << endl;
    }
    */

    /*do while(ASSSSS never use this!!!!!!!!!!!)
    int num;

    do{
        cout << "enter positive num: ";
        cin >> num;
    }while(num<=0);
    cout << "good";
    */

    /*string methods
    string name;

    cout << "name? ";
    getline(cin, name);
    //name.clear();
    //name.append("@mail.com");
    //cout << name.at(0);
    //cout << name.insert(0, "sir cornelius ");
    //cout << name.find('s');
    cout << name.erase(0, 5);
    */

    /*
    if(name.length() > 12) {
        cout << "too longgggg";
    } else {
        cout << "not too long";
    }
    */

    /*
    if (name.empty()) {
        cout << "empty";
    } else {
        cout << "not empty";
    }
    */

    /*temp conversion
    double temp;
    char unit;


    cout << "enter unit: ";
    cin >> unit;
    cout << "enter temp: ";
    cin >> temp;

    if (unit == 'c') {
        cout << (temp > 0 && temp < 30 ? "normal" : "not normal");
    } else if (unit == 'f') {
        cout << (temp > 32 && temp < 86 ? "normal" : "not normal");
    } else {
        cout << "invalid unit";
    }
    */

    /*logical operators: && || !
    int temp;
    bool sunny = false;
    int num = 6;

    cout << "enter temp: ";
    cin >> temp;

    if (temp > 0 && temp < 10) {
        cout << "temp = cold\n";
    } else  {
        cout << "sigma\n";
    }

    if (!sunny) {
        cout << "sunny\n";
    } else {
        cout << "not sunny\n";
    }

    if (num == 5 || num == 6) {
        cout << "num is 5 or 6";
    } else {
        cout << "num is not 5 or 6";
    }
    */

    /*ternary operators
    int grade = 75;

    grade < 100 ? cout << "not 100" << endl : cout << "100" << endl;

    int number = 10;

    number == 10 ? cout << "this number is 10" << endl : cout << "this number is not 10" << endl;

    cout << (number  ==  10 ? "is 10" : "is not 10");
    */

    /*grade judging
    char grade;
    std::cout << "enter grade: ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "okayokay";
            break;
        case 'B':
            std::cout << "okay";
            break;
        case 'C':
            std::cout << "meh";
            break;
        case'D':
            std::cout << "ass";
            break;
        case 'E':
            std::cout << "assass";
            break;
        case 'F':
            std::cout << "asssssssssss";
            break;
        default:
            std::cout << "invalid";
            break;
    }
    */
    
    /*pythagorean theorem
    int a;
    int b;
    double c;

    std::cout << "enter a: ";
    std::cin >> a;

    std::cout << "enter b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "square root: " << c;
    */

    /*more math
    double x = 3.99;
    double y = 4;
    double z;

    //z = std::max(x, y);
    //z = std::min(x, y);
    //z = pow(2, 4);
    //z = sqrt(9);
    //z = abs(-3);
    //z = round(x);
    //z = ceil(x);
    z = floor(x);

    std::cout << z;
    */

    /*user input
    std::string name;
    int age;

    std::cout << "enter name: ";
    std::getline(std::cin, name);

    std::cout << "age: ";
    std::cin >> age;

    std::cout << "ur age: " << age << '\n';
    std::cout << "ur name: " << name << '\n';
    */

    /*type conversion
    double x = (int) 5.5;;

    std::cout << x << '\n';
    std::cout << (char) 100 << '\n';

    int correct = 8;
    int questions = 100;
    double percentage = (double)correct/questions * 100;

    std::cout << percentage << "%" << '\n';
    */

    /*arythmatic
    int students = 6 - 5 + 4 * 3 / 2;

    std::cout<< students;
    */

    /*typedef/using
    text_t firstname = "sigma";
    int_t age = 2191114;
    std::cout << age << std::endl;
    */

    /*namespace
    using namespace sigma;
    //int x = 1;
    std::cout << x;
    */

    /*const
    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference;
    */

    /*variables + basic data types
    int year = 2020;
    double pp = 1.1;
    char initial = 'C';
    bool dumb = true;
    std::string name = "sigma";
    */

    /*strings and lines
    std::cout << "Hello, Sigma 1!" << std::endl;
    std::cout << "Hello, Sigma 2!" << '\n';
    std::cout << "Hello, Sigma 3!";
    */
    
    return 0;
}

/*
void sigma(int num)
{
    cout << "sigma " << num << endl;
}
*/

/*
double square(double len){
    double result = len * len;
    return result;
}

double cube(double len){
    double result_c = len * len * len;
    return result_c;
}
*/

/*
string mergeStrings(string x, string y){
    return x + " " + y;

}
*/
