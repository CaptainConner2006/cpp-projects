#include <iostream>
#include <vector>
#include <cmath>
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

/*
void bakePizza(){
    cout << "here is ur pizza\n";
}

void bakePizza(string topping1){
    cout << "here is ur pizza with " << topping1 << endl;
}

void bakePizza(string topping1, string topping2){
    cout << "here is ur pizza with " << topping1 << " and " << topping2 << endl;
}
*/

int main()
{
    /*overloaded functions
    bakePizza("sigma", "aerboivetbns");
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

    /*ternary operators (condition ? true : false)
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