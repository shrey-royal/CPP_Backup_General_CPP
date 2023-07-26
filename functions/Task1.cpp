#include<iostream>
using namespace std;

int getFibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return getFibonacci(n - 1) + getFibonacci(n - 2);
    }
}


int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << getFibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

/*
Fibonacci series: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 ...
> The first two numbers are 0 and 1 respectively. the other numbers are the sum of the previous two numbers.

*/