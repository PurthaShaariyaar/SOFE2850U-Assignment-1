#ifndef DECIMALCONVERTER_H
#define DECIMALCONVERTER_H

int decToBin(int input_number) {
    int binaryNum[100];
    int i = 0;

    while (input_number > 0) {
        binaryNum[i] = input_number % 2; 
        input_number = input_number / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
}

int decToOctal(int input_number) {
    int octalNum = 0, placeValue = 1; 
    
    while (input_number != 0) {
        octalNum += (input_number % 8) * placeValue;
        input_number = input_number / 8; 
        placeValue = placeValue * 10; 
    }
    cout << octalNum;
}

int decToHex(int input_number) {
    int rem; 

    rem = input_number % 16; 
    input_number = input_number / 16; 
    decToHex(input_number);

    if (rem > 9) {
        cout << (char)(rem - 10 + 'A');
    } else {
        cout << rem;
    }
}


#endif