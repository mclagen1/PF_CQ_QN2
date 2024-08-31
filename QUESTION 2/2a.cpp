#include <iostream>
using namespace std;

void printDivisors(int n) {
    for (int i = n; i >= 1; --i) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    cout << "This program reads a positive integer and prints all of its divisors in decreasing order." << endl;
    cout << "You can terminate the program by entering a zero or negative integer." << endl;

    int num;
    char choice;

    do {
        cout << "\nPlease enter a positive integer (or enter 0 or a negative number to exit): ";
        cin >> num;

        if (num <= 0) {
            cout << "Program terminated due to non-positive integer input." << endl;
            break;
        }

        cout << "The divisors of " << num << " in decreasing order are:" << endl;
        printDivisors(num);

        cout << "\nWould you like to enter another integer? (y/n): ";
        cin >> choice;

        while (choice != 'y' && choice != 'n') {
            cout << "Invalid input. Please enter 'y' to continue or 'n' to exit: ";
            cin >> choice;
        }

    } while (choice == 'y');

    cout << "Thank you for using the program. Goodbye!" << endl;

    return 0;
}

