#include <string>
#include <iostream>
using namespace std;


int main() {
    // string intro
    string greeting = "Hello";

    cout << greeting;

    // string concatenation, The + operator can be used between strings to add them together to make a new string. This is called concatenation
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName; // fullName is "John Doe"

    cout << "\n" << fullName << endl;
    cout << firstName.append(lastName) << endl; // Print out using append function

    // Difference between string and integer
    string strNumber = "100";
    string srtNumber2 = "200";
    string fullNumber = strNumber + srtNumber2; // fullNumber is "100200"
    cout << "The concatenated string number is: " << fullNumber << endl;

    // String length, To get the length of a string, use the length() function:
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the string txt is: " << txt.length() << endl;
    cout << "The length of the string txt is: " << txt.size() << endl; // size() function also works the same as length()

    // Accessing string characters, You can access the characters in a string by referring to its index number inside square brackets []
    string sample = "Hello World";
    cout << "The first character is: " << sample[0] << endl; // index starts at 0, result: H
    cout << "The seventh character is: " << sample[6] << endl; // result: W

    string myString = "Hello";
    cout << myString[myString.length() - 1];

    string test = "Programming";
    test[0] = 'B'; // Change the first character from 'P' to 'B'
    cout << "\n" << test << endl; // result: Brogramming

    string myString2 = "Hello";

    cout << "First character \t" << myString2.at(0) << endl;  // First character
    cout << "Second character \t" << myString2.at(1) << endl;  // Second character
    cout << "Third character \t" << myString2.at(myString2.length() - 1) << endl;  // Last character

    myString2.at(0) = 'J';
    cout << "Change first index of myString2: " << myString2 << endl;


    // User input with strings
    // 1. First Example
    //string fullName2;
    //cout << "Enter your full name: ";
    //cin >> fullName2; // This will only capture the first word before a space
    //cout << "Your name is: " << fullName2 << endl;

    // 2. Second Example using getline() to capture full line including spaces
    string fullName3;
    cout << "Enter your full name: ";
    getline(cin, fullName3);
    cout << "Your full name is: " << fullName3 << endl;


    // omitting return 0
    std:: cout << "Program ended." << std::endl;

    return 0;
}

