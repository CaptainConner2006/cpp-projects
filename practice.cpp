#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

/*
typedef std::vector<std::pair<std::string,int>> pairlist_t;
//typedef std::string text_t;
//typedef int int_t;

using text_t = std::string;
using int_t = int;
*/

/*
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

/*
double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}
*/

/*
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

int main()
{
    //fill array with user input
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
