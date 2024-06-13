/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;


int main() {

    int numbers[10] = {0}; 

    int n;

    cout << "Enter numbers between 1 and 9 (or 0 to stop):" << endl;

    while (true) {

        cin >> n;

        if (n == 0) break;

        if (n < 1 || n > 9) {

            cout << "Invalid input. Please enter a number between 1 and 9." << endl;

            continue;

        }

        numbers[n]++;

    }


    cout << "You entered:" << endl;

    for (int i = 1; i <= 9; i++) {

        if (numbers[i] > 0) {

            cout << i << ": " << numbers[i] << " times" << endl;

        }

    }


    int max_count = 0, min_count = 10;

    int max_num, min_num;

    for (int i = 1; i <= 9; i++) {

        if (numbers[i] > max_count) {

            max_count = numbers[i];

            max_num = i;

        }

        if (numbers[i] < min_count && numbers[i] > 0) {

            min_count = numbers[i];

            min_num = i;

        }

    }


    cout << "The number with the most occurrences: " << max_num << " with " << max_count << " times" << endl;

    cout << "The number with the least occurrences: " << min_num << " with " << min_count << " times" << endl;


    return 0;

}
