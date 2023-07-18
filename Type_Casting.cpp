#include<iostream>
#include<typeinfo> // for typeid() function
using namespace std;

int main() {
    int a = 10;
    float b = a; // Implicit Casting

    cout << "Value of a: " << a  << "\t\t" << typeid(a).name() << ": " << sizeof(a) << endl;
    cout << "Value of b: " << b << "\t\t" << typeid(b).name() << ": " << sizeof(b) << endl;

    float c = 10.5;
    int d = (int)c; // Explicit Casting

    cout << "Value of c: " << c << "\t" << typeid(c).name() << ": " << sizeof(c) << endl;
    cout << "Value of d: " << d << "\t\t" << typeid(d).name() << ": " << sizeof(d) << endl;

    return 0;

}

/*
Q. What is Type Casting?
> Type casting is a way to convert a variable from one data type to another data type. For example, if you want to store a 'long' value into a simple integer then you can type cast 'long' to 'int'. You can convert the values from one type to another explicitly using the cast operator as follows − (type_name) expression.

> There are two types of casting in C++:
1. Implicit Casting - done by compiler
2. Explicit Casting - done by programmer

> Implicit Casting: When the compiler automatically converts one data type to another data type, it is known as implicit type casting. This is also known as automatic type conversion. This is done when the two types are compatible with each other. For example, converting an int to a float, double to int, etc. In here there will be no loss of data.

> Explicit Casting: When the programmer converts one data type to another data type, it is known as explicit type casting. This is also known as type casting. This is done when the two types are not compatible with each other. For example, converting a char to int, char to double, etc. In here there will be loss of data.

> Type Casting is also known as Type Conversion.

> Examples of Implicit Casting:

int a = 10;
float b = a; // Implicit Casting

> Examples of Explicit Casting:

float a = 10.5;
int b = (int)a; // Explicit Casting

> there will be implicit casting when we assign a value of smaller data type to a variable of larger data type. For example, assigning an int value to a float variable. 

> there will be explicit casting when we assign a value of larger data type to a variable of smaller data type. For example, assigning a float value to an int variable.

> cycle of casting: char -> int -> float -> double  --> implicit casting
> cycle of casting: double -> float -> int -> char  --> explicit casting

*/