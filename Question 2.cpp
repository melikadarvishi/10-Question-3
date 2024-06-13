/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int calculator(int num1, int num2, char operation) {

    int result;

    switch (operation) {

        case '+':

            result = num1 + num2;

            break;

        case '-':

            result = num1 - num2;

            break;

        case '*':

            result = num1 * num2;

            break;

        case '/':

            if (num2 == 0) {

                cout<<"The second value cannot be zero"<<endl;
                return 0;

            }

            result = num1 / num2;

            break;

        default:

            cout<<"The operator is not valid"<<endl;   
            return 0;

    }

    return result;

}


int main() {

    int num1, num2;

    char operation;

cout<<"Please enter two numbers and an operator"<<endl;

    cin >> num1 >> operation >> num2;
    cout<<"Result:"<<calculator(num1,num2,operation)<<endl;

    return 0;

}
