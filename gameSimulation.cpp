#include <iostream>
using namespace std;

int main () {
    float temperature, celsius, fahrenheit;
    cout << "==============================" << endl;
    cout << "Temperature Converter" << endl;
    cout << "Choose the conversion type:" << endl;
    cout << "1. Celcius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celcius" << endl;
    cout << "3. Exit" << endl;
    int choice;
    cout << "Enter your choice (1 or 2 or 3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5/9;
        cout << "Temperature in Celsius: " << celsius << endl;
    } else if (choice == 3) {
        cout << "Exiting the program." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
    
   while (true) {
        cout << "Do you want to perform another conversion? (yes/no): ";
        string again;
        cin >> again;
        if (again == "yes") {
            main(); // Call main function again for another conversion
            break; // Exit the loop after the second conversion
        } else if (again == "no" || again == "exit") {
            cout << "Thank you for using the Temperature Converter. Goodbye!" << endl;
            break; // Exit the loop and end the program
        } else {
            cout << "Invalid input. Please type 'yes' or 'no'." << endl;
        }
   }

return 0;   
}