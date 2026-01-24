#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Menu:\n";
    cout << "1. Tea\n";
    cout << "2. Coffee\n";
    cout << "3. Milk\n";
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Tea." << endl;
            break;
        case 2:
            cout << "You selected Coffee." << endl;
            break;
        case 3:
            cout << "You selected Milk." << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
            break;
    }

    return 0;
}