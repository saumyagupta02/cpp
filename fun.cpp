// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;
int factorial(int);

int main() {
    int n, result;

    cout << "Enter a positive number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) { 
        return n * factorial(n - 1);
    } else { 
        return 1;
    }
}

// 1.	Write a C++ program to implement a recursive function to calculate the sum of digits of a given number.
// 2.	Write a C++ program to implement a recursive function to find the maximum and minimum elements in an array.
// 3.	Write a C++ program to implement a recursive function to calculate the sum of even and odd numbers in a given range.
// 4.	Write a C++ program to implement a recursive function to find the sum of all prime numbers in a given range.
