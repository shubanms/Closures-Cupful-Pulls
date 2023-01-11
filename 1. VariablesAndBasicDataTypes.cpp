#include <iostream>
using namespace std;

int main(){

    int x; //Declaration
    x = 10; //Assignment of the variable

    cout << x << endl; //Printing the variables value

    int y = 5;
    cout << y << endl; // endl is used to end the line and print on next line

    int answer = x+y;
    cout << answer << endl;


    // INTEGER (Whole Number)

    int age = 20;
    int year = 2023;
    int days = 7.5; // Decimal portion is truncated


    // DOUBLE (Number including Decimals)

    double price = 10.99;
    double gpa = 2.7;
    double temperature = 25.6;


    // CHAR (Single Character)

    char grade = 'A';
    char initial = 'B';
    char currency = '$';
    char name = 'Sam'; // Overflow error is thrown


    // BOOLEAN (True or False)

    bool student = false;
    bool power = true;
    bool forSale = true;


    // STRING (A sequence of characters)

    string name = "Rahul";
    string day = "Friday";
    string food = "Pizza";

    cout << day << endl;                                                                                
    cout << name << endl;
    cout << food << endl;


    // CONST Variable (constant variables)

    const double PI = 3.14159; // can not update the value of the variable
    double radius = 10;
    double circumference = 2 * PI * radius;

    cout << circumference << "cm" << endl;

    return 0;
}
