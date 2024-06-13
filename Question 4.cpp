/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


double calculateCircumference(double radius) {

    return 2 * M_PI * radius;

}


double calculateArea(double radius) {

    return M_PI * pow(radius, 2);

}


int main() {

    double radius;

    cout << "Please enter the radius of the circle:"<<endl;
    cin >> radius;

    double circumference = calculateCircumference(radius);

    double area = calculateArea(radius);

    cout<<"perimeter of the circle"<<circumference<<endl;
    cout<<"Area of circle:"<<area<<endl;
    return 0;

}

