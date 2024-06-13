/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int total,number;
    float share;
    cout<<"Enter total speding:";
    cin>>total;
    cout<<"Enter number of persons:";
    cin>>number;
    cout<<"share:"<<total/number<<endl;
    cout<<"share:(Driving&Madarkharj):"<<total/(number-2);
    return 0;
}