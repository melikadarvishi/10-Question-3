/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int reverseNumber(int num, int reversed = 0) {

    if (num == 0)

        return reversed;

    else

        return reverseNumber(num / 10, (reversed * 10) + (num % 10));

}


int main() {

    int num;

    cout << "please enter the number : ";

    cin >> num;

    cout << "opposite numbeer: " << reverseNumber(num) <<endl;

    return 0;

}

