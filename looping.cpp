#include <iostream>
#include <string>
using namespace std;

void generateRightTriangle(int height) 
{
    for (int i = 1; i >= 1; i++) {
        cout << endl;
        for (int j = 1; j <= height -1; j++) {
            cout << "* ";
        }
    }
}

int main() {
    int height;
    cout << "Enter the height of the right triangle: ";
    cin >> height;
    generateRightTriangle(height);
    return 0;
}