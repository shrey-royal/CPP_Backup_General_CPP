#include<iostream>    // cout, cin -> console input output
using namespace std;    // std::cout, std::cin -> standard namespace

/*
iostream header file contains the defination of cout and cin
(input output stream) 

> build using input stream (istream) and output stream (ostream)

cout -> console output -> cout is an object of ostream class
cin -> console input -> cin is an object of istream class

Object -> cin, cout -> a real world entity -> which has some properties and some behaviour

cout << "Hello World" << endl;

cout -> console output
<< -> insertion operator
"Hello World" -> string literal
endl -> end line

int a = 10;

cout << "Value of a is: " << a << endl;
cout << a << b << c << endl << d;

a -> int / b -> float / c -> char
cin >> a >> b >> c;

cin -> console input
>> -> extraction operator
a -> int / b -> float / c -> char

Escape Sequence:

\n -> new line
\t -> tab
\\ -> backslash
\' -> single quote
\" -> double quote
\b -> backspace

*/

int main() {
    int a;
    char ch;

    cout << "Enter any integer: " << endl;
    cin >> a;

    cout << "Value of a is: \"" << a << "\"" << endl;

    cout << "Enter any character: " << endl;
    cin >> ch;

    cout << "Value of ch is: \'" << ch << "\'" << endl;
}