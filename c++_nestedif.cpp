#include<iostream>
#include<string>

using namespace std;

int main() {
    /*int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;

        if (age >= 21) {
            cout << "You are also eligible to drink alcohol." << endl;
        } else {
            cout << "You are not eligible to drink alcohol." << endl;
        }
            if (age >= 30) {
                cout << "You are suggested to marriage...HAHAHAHHA 😁" << endl;
            } else {
                cout << "You are not suggested to marriage yet." << endl;
            } 
                if (age >= 40) {
                    cout << "You are eligible for senior citizen benefits." << endl;
                } else {
                    cout << "You are not eligible for senior citizen benefits." << endl;
                }

    } else {
        cout << "You are not eligible to vote." << endl;
    }*/

    bool isLoggedIn = true;
    bool isAdmin = true;
    int securityLevel = 3; // the highest level is 1

    if (isLoggedIn && isAdmin || securityLevel <= 2) {
        cout << "Access granted." << endl;
    } else {
        cout << "Access denied." << endl;   
    }

    bool admin = true;
    bool editor = false;
    bool viewer = true;
    if (admin || editor && viewer) {
        cout << "You have sufficient permissions." << endl;
    } else {
        cout << "You do not have sufficient permissions." << endl;
    }
    return 0;
}