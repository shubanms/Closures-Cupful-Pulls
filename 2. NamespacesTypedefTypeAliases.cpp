#include <iostream>
using namespace std;

typedef std::string text; // Reversed keywords used to create and additional name for another data type
using text = std::string;

// NAMESPACE (Used to prevent name conflicts)
namespace first{
    int x = 10;
}

namespace second{
    int x = 20;
}

int main(){

    int x = 0;

    cout << x <<endl; // Prints 0 if we dont explicitly mention the variable we want to use

    cout << first::x << endl; // Prints 10
    cout << second::x << endl; // Prints 20

    text name = "Rahul";

    cout << name << endl;

    return 0;
}