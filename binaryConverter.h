#ifndef BINARYCONVERTER_H
#define BINARYCONVERTER_H

int binToOctal(int input_number) {
    int octalNum = 0, decimalNum = 0, count = 0; 

    while (input_number != 0) {
        decimalNum += (input_number % 10) * pow(2, count);
        ++count;
        input_number / 10; 
    } 
    count = 1; 
    while (decimalNum != 0) {
        octalNum += (decimalNum % 8) * count;
        decimalNum / 8;
        count *= 10; 
    }
    cout << octalNum;
}

int binToDec(int input_number) {
    int decimalNum = 0; 
    int base = 1; 
    int temp = input_number;

    while (temp) {
        int lastDigit = temp % 10;
        temp = temp / 10; 
        decimalNum += lastDigit * base;
        base = base * 2;
    }
    cout << decimalNum;
}

int binToHex(int input_number) {
    int i, temp = 0, hexa[20], rem;
    
    for (i = 0; input_number > 0; i++) {
        for (int y = 0; y < 4; y++) {
            rem = input_number % 10; 
            input_number / 10; 
            temp += rem * pow(2, y);
        }
        hexa[i] = temp;
        temp = 0;
    }
    while (i > 0) {
        i--; 
        if(hexa[i] > 9) {
            cout << char(55 + hexa[i]);
        } else {
            cout << hexa[i];
        }
    }
}

#endif
