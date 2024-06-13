/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int inRange(double x, double low, double high) {

    if (x >= low && x <= high) {

        return 0;

    } else if (x < low) {

        return -1;

    } else {

        return 1;

    }

}


int main() {

    double x, low, high;

    cout<<"please enter the number:";
    
    cin >> x >> low >> high;

    int result = inRange(x, low, high);

    if (result == 0) {

    cout<<"The number is in the x range"<<endl;


    } else if (result == -1) {

        cout<<"The number is smaller than the interval"<<endl;

    } else {

        cout<<"The number is greater than the interval"<<endl;

    }

    return 0;

}

