#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main() {

    // Example 1: Simple if-else statement
    int number;
    cout << "Enter an integer: ";
    cin >> number;


    if (number > 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;    
    }

    // Example 2: if, else if, else statement

    int x = 10;
    int y;

    cout << "Enter a number for y: ";
    cin >> y;

    if (x > y) {
        cout << "x is greater than y" << endl;
    } if (x == y) {
        cout << "x is equal to y" << endl;
    } if (x < y) {
        cout << "x is less than y" << endl;      
    } else {
        0;
    }


    int time = 7;
    if (time < 18) {
        cout << "Good day." << endl;
    } else if (time == 18) {
        cout << "Good evening." << endl;
    } else {
        cout << "Good night." << endl;
    }

    // shorthand if else (ternary operator)
    int hour = 20;
    string result = (hour < 18) ? "Good day." : "Good evening.";
    cout << result << endl;

    int time = 12;
    cout << ((time < 18) ? "Good day." : "Good evening.");

    return 0;
}