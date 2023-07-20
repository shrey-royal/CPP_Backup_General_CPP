/*
283: 00011011
*/

#include<iostream>
using namespace std;

int reverseNumber(int);

int main() {
    int decimalNumber = 0, binaryNumber = 0;
    int remainder = 0, i = 0;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    while(decimalNumber != 0) {
        remainder = decimalNumber % 2;
        decimalNumber /= 2;
        (binaryNumber *= 10) += remainder;
    }

    binaryNumber = reverseNumber(binaryNumber);
    cout << "Binary number: " << binaryNumber << endl;

    return 0;
}

int reverseNumber(int number) {
    int reverseNumber = 0, remainder = 0;

    while(number != 0) {
        remainder = number % 10;
        number /= 10;
        (reverseNumber *= 10) += remainder;
    }

    return reverseNumber;
}