#include <iostream>

/*
This is a simple C++ program that serves as a starting point for further development.
It includes the iostream library for input and output operations and uses the standard namespace.
*/
using namespace std;

int main() {
    cout << "Hi world!" << endl;

    string myName = "Treya Karina";
    int myAge = 23;
    double myHeight = 5.4;
    cout << "My name is " << myName << " I am " << myAge << " years old" << " my height is " << myHeight << " feet." << endl;

    int a = 5;
    int b = 10;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is " << sum << "." << endl;
    return 0;
}