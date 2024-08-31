#include <iostream>
#include <algorithm>
#include <vector>
#include <vector>
#include <iostream>
using namespace std;


static void printDivisors(int n) {
    std::vector<int> divisors;

    // Find all divisors
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }

    // Sort divisors in decreasing order
    std::sort(divisors.rbegin(), divisors.rend());

    // Print divisors
    for (int divisor : divisors) {
        std::cout << divisor << std::endl;
    }
}

int main() {
    std::cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you.\n";
    std::cout << "The program will repeatedly prompt you to enter a positive integer. Each time you enter a positive integer,\n";
    std::cout << "the program will print all the divisors of your integer in a column and in decreasing order.\n";

    while (true) {
        int num = 0;

        // Prompt the user for a positive integer
        while (true) {
            std::cout << "Please enter a positive integer: ";
            std::cin >> num;

            if (num > 0) {
                break;  // valid input
            }
            else {
                std::cout << num << " is not a positive integer.\n";
            }
        }

        // Print divisors
        printDivisors(num);

        // Ask if the user wants to continue
        char choice = 0;
        while (true) {
            std::cout << "Would you like to see the divisors of another integer (Y/N)? ";
            std::cin >> choice;

            if (choice == 'Y' || choice == 'y') {
                break;  // continue loop to ask for another integer
            }
            else if (choice == 'N' || choice == 'n') {
                std::cout << "Program terminated. Goodbye!\n";
                return 0;  // exit the program
            }
            else {
                std::cout << "Please respond with Y (or y) for yes and N (or n) for no.\n";
                ;
            }
        }
    }
}
