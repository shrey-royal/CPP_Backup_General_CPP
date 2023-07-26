#include<iostream>
using namespace std;

//function declaration
// void sum(); //no return type and no arguments
// void sum(int, int); //no return type and with arguments
// int sum();   //with return type and no arguments
int sum(int, int); //with return type and with arguments

int main() {
    //1st function type - no return type and no arguments
    // sum();
    // system("pause"); //pause screen
    // system("cls");  //clear screen
    // sum();

    //2nd function type - no return type and with arguments
    // int d, e;
    // cout << "Enter two numbers: ";
    // cin >> d >> e;
    // sum(d, e);

    //3rd function type - with return type and no arguments
    // int result = sum();
    // cout << "Sum is: " << result << endl;

    //4th function type - with return type and with arguments
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int result = sum(a, b);
    cout << "Sum is: " << result << endl;
    


    return 0;
}

//function definition
// void sum() {
//     int a, b;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter b: ";
//     cin >> b;

//     cout << "Sum is: " << a + b << endl;
// }

// void sum(int a, int b) {
//     cout << "Sum is: " << a + b << endl;
// }

// int sum() {
//     int a, b;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter b: ";
//     cin >> b;

//     return a + b;
// }

int sum(int a, int b) {
    return a + b;
}