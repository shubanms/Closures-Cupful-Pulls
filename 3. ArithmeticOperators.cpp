#include <iostream>
using namespace std;

int main(){

    // ADDITION (+ adds two numbers together)

    int students = 10;
    cout << students << endl;

    students = students + 1; // Increments students by 1
    cout << students << endl;

    students++; // Increments students by 1
    cout << students << endl;


    // SUBTRACTION (- subtracts two number together)

    int age = 10;
    cout << age << endl;

    age = age - 2;
    cout << age << endl;

    age -= 2; // Short hand
    cout << age << endl;


    // DIVISION (/ divides two numbers together)

    int cake = 10;
    cout << cake << endl;

    cake = cake / 2;
    cout << cake << endl;

    cake /= 2; // Short hand of writing division
    cout << cake << endl;


    // MULTIPLICATION (* multiplies two number together)

    int tax = 10;
    cout << tax << endl;

    tax = tax * 2;
    cout << tax << endl;

    tax *= 2; // Short hand
    cout << tax << endl;

    
    // Follows basic rules of BODMAS

    int apples = 6 - 5 + 4 * 3 / 2; // Answer is 7;
    cout << apples << endl;

    return 0;
}