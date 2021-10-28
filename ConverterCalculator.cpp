#include <iostream>
#include <cmath>
#include <string.h>
#include"binaryConverter.h"

using namespace std; 

bool validateInput(int input_number, int source) {

    bool checkInput = false; 

    do {
        if (source == 2) {
            if (input_number % 10 != 1 || input_number % 10 != 0) {
                std::cout << "You entered a number that's not a binary number." << "\n";
                std::cout << "Please enter a valid binary number" << "\n";
            } else {
                checkInput = true;
            }
        } 
        else if (source == 8) {
            // validate octal number
        } 
        else if (source == 10) {
            // validate dec number
        } else {
            // validate hex number
        }
    } while (checkInput == false);
}

int convert_number(int input_number, int source, int target) {
    if (source == 2) {
        // binaryConverter method
    } else if (source == 8) {
        // octalConverter method 
    } else if (source == 10) {
        // decimalConverter method 
    } else {
        // hexadecimalConverter method
    }
}

int main() {

    int input_number; 
    int source; 
    int target;

    string select; 

    std::cout << "Welcome to the Numbering System Calculator!" << "\n";
    std::cout << "------------------------------------------------------" << "\n";
    std::cout << "Please Enter the following inputs" << "\n";
    std::cout << "The number to convert: " << "\n";
    cin >> input_number;
    std::cout << "The source base: " << "\n";
    cin >> source;
    std::cout << "The target base: " << "\n";
    cin >> target; 

    return 0; 
}