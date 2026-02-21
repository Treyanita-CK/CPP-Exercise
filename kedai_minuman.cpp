#include <iostream>
#include <string>

using namespace std;

int main() {
    do {
        string order;
        cout << "Welcome to our drink shop! What would you like to order? (Please type 'order' to continue or 'exit' to quit)" << endl;
        if (cin >> order) {
            if (order == "exit") {
                cout << "Thank you for visiting! Goodbye!" << endl;
                break; // Exit the loop and end the program
            } else if (order == "order") {
                // Proceed to take the order
                int choice, toppingChoice;
                cout << "1. Coffee" << endl;
                cout << "2. Tea" << endl;
                cout << "3. Juice" << endl;
                cout << "4. Milkshake" << endl;
                cout << "5. Topping" << endl;
                cout << "Enter your choice (1-5): ";
                cin >> choice;
                switch (choice) {
                    case 1:
                        cout << "You selected Coffee. Your drink will be ready shortly!" << endl;
                        break;
                    case 2:
                        cout << "You selected Tea. Your drink will be ready shortly!" << endl;
                        break;
                    case 3:
                        cout << "You selected Juice. Your drink will be ready shortly!" << endl;
                        break;
                    case 4:
                        cout << "You selected Milkshake. Your drink will be ready shortly!" << endl;
                        cout << "Do you want to add Whip Cream topping? (yes/no): ";
                        cin >> toppingChoice;
                        if (toppingChoice == 1) {
                            cout << "Whip Cream topping added. Your drink will be ready shortly!" << endl;
                        } else {
                            cout << "No Whip Cream topping added. Your drink will be ready shortly!" << endl;
                        }   
                        break;
                    case 5:
                        cout << "You selected Topping. Your drink will be ready shortly!" << endl;
                        break;
                    default:
                        cout << "Invalid choice. Please select a valid option." << endl;
                }
            } else {
                cout << "Invalid input. Please type 'order' to continue or 'exit' to quit." << endl;
            }
            break;
    }
    } while (true); // Loop will continue until the user chooses to exit
}