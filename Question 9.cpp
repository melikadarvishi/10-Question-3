/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;



int power(int base, int exponent) {

    if (exponent == 0) return 1;

    return base * power(base, exponent - 1);

}



int factorial(int n) {

    if (n == 0 || n == 1) return 1;

    return n * factorial(n - 1);

}



int fibonacci(int n) {

    if (n == 0) return 0;

    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);

}



int multiply(int a, int b) {

    if (b == 0) return 0;

    return a + multiply(a, b - 1);

}


int main() {

    int choice;

    cout << "Choose a function to execute:" << endl;

    cout << "1. Power" << endl;

    cout << "2. Factorial" << endl;

    cout << "3. Fibonacci" << endl;

    cout << "4. Multiply" << endl;

    cout << "Enter your choice: ";

    cin >> choice;


    switch (choice) {

        case 1: {

            int base, exponent;

            cout << "Enter base and exponent: ";

            cin >> base >> exponent;

            cout << "Result: " << power(base, exponent) << endl;

            break;

        }

        case 2: {

            int n;

            cout << "Enter a number: ";

            cin >> n;

            cout << "Result: " << factorial(n) << endl;

            break;

        }

        case 3: {

            int n;

            cout << "Enter a number: ";

            cin >> n;

            cout << "Result: " << fibonacci(n) << endl;

            break;

        }

        case 4: {

            int a, b;

            cout << "Enter two numbers: ";

            cin >> a >> b;

            cout << "Result: " << multiply(a, b) << endl;

            break;

        }

        default:

            cout << "Invalid choice." << endl;

    }


    return 0;

}