#include <iostream>
#include <cmath>
#include <string.h>
#include"binaryConverter.h"
#include"decimalConverter.h"

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
            return checkInput;
        } 
        else if (source == 8) {
            while (input_number) {
                if ((input_number % 10) >= 8) {
                    std::cout << "Not a valid octal number, please re-enter";
                    break;
                } else {
                    input_number = input_number / 10;
                }
                checkInput = true;
            }
            return checkInput;
        } 
        else if (source == 10) {
            // validate dec number
            string checkDigit = to_string(input_number);
            for (int i = 0; i < checkDigit.length(); i++) {
                if (!isdigit(checkDigit[i])) {
                    std::cout << "This is not a digit, please enter a digit" << "\n";
                    break;
                } else {
                    checkInput = true;
                    break;
                }
            }
            return checkInput;
        } else {
            string checkHexChar = to_string(input_number);
            for (int i = 0; i < checkHexChar.length(); i++) {
                if (!isxdigit(checkHexChar[i])) {
                    std::cout << "Not a valid hexadecimal, please re-enter"; 
                    break;
                } else {
                    checkInput = true;
                    break;
                }
            }
            return checkInput;
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
