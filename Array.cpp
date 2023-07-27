/*
Array: A collection of similar data items stored at contiguous memory locations.
Contiguous memory locations: Memory locations that are next to each other.

Syntax: 
    dataType arrayName[arraySize];
    int arr[5];

    int arr[5] = {1, 2, 3, 4, 5};

    int arr[] = {1, 2, 3, 4, 5};

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
*/

#include<iostream>
using namespace std;

int* ScanArray(int length) {
    int* arr = new int[length]; //dynamic array
    for(int i = 0; i < length; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    return arr;
}

void PrintArray(int* arr, int length) {
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    // int arr[] = {1, 2, 3, 6, 7};

    // cout << sizeof(arr)  << " - " << sizeof(arr[0]) << endl;
    // cout << (int)&arr[0] << ", " << (int)&arr[1] << ", " << (int)&arr[2] << endl;
    
    //length of array
    // int length = sizeof(arr) / sizeof(arr[0]);
    // cout << length << endl;

    //traversing array
    // for(int i = 0; i < length; i++) {
    //     // cout << (int)&arr[i] << " ";
    //     cout << arr[i] << " ";
    // }

    int len;
    cout << "Enter length of array: ";
    cin >> len;
    int arr[len];
    // int* arr = ScanArray(len);

    for (int i = 0; i < len; i++) {
        arr[i] = rand() % 100;
    }
    PrintArray(arr, len);

    return 0;
}

/*
Tasks: Array

1. Write a program to find the sum of all elements of an array.
2. Write a program to find the largest and smallest element of an array.
3. Write a program to find the second largest and second smallest element of an array.
4. WAP to find the Average of N numbers using arrays.
5. WAP to find sum of all even numbers present in that array.
6. WAP to find sum of all odd numbers present in that array.
7. WAP to find count of all even numbers present in that array.
8. WAP to find count of all odd numbers present in that array.
9. WAP to find sum of all positive numbers present in that array.
10. WAP to find sum of all negative numbers present in that array.

Using array and functions:

1. WAP to find Palindrome number using array.
Ex: [1, 2, 3, 2, 1] is a palindrome number.
[1, 2, 3, 4, 5] is not a palindrome number.

2. WAP to find Armstrong number using array.
Ex: [1, 5, 3] is an Armstrong number.
[1, 2, 3] is not an Armstrong number.

*/