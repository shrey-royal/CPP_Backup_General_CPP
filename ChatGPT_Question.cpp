/*
Problem statement: 

Write a C++ program to calculate the area of a triangle when given the lengths of its three sides, using the Heron's formula. Ensure that the input side lengths are positive real numbers. If the input sides cannot form a valid triangle (i.e., the sum of any two sides is less than or equal to the third side), print an error message indicating that the given side lengths do not form a valid triangle. Otherwise, calculate and display the area of the triangle using the following formula:

Area = √(s * (s - side1) * (s - side2) * (s - side3))

where s is the semi-perimeter of the triangle, given by:

s = (side1 + side2 + side3) / 2

Ensure that the output is rounded to two decimal places.

You can use the following formula for typecasting to round the output to two decimal places:

rounded_value = static_cast<double>(static_cast<int>(value * 100 + 0.5)) / 100;

Remember to include appropriate header files, take user input for the side lengths, and use control statements to implement the required checks and calculations.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int side1 = 0, side2 = 0, side3 = 0;
    double area = 0.0, s = 0.0;
    int flag = 0;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 > 0 && side2 > 0 && side3 > 0) {
        if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
            s = (side1 + side2 + side3) / 2;
            area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        } else {
            flag = 1;
            cout << "The given side lengths do not form a valid triangle";
        }
    } else {
        flag = 1;
        cout << "Side lengths must be positive real numbers";
    }

    if(!flag)
        cout << "Area of the triangle: " << (area * 100 + 0.5) / 100 << endl;

    return 0;
}