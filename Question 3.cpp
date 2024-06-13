/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;


double calculateWeightedAverage(double w[10], double g[10], int size) {

    double sum = 0;

    for (int i = 0; i < size; i++) {

        sum += w[i] * g[i];

    }

    return sum;

}


int findMaxIndex(double g[10], int size) {

    int maxIndex = 0;

    for (int i = 1; i < size; i++) {

        if (g[i] > g[maxIndex]) {

            maxIndex = i;

        }

    }

    return maxIndex;

}


int main() {

    double w[10], g[10];

    cout<<"Please enter weights and grades:"<<endl;

    for (int i = 0; i < 10; i++) {

        cin >> w[i] >> g[i];

    }

    double weightedAverage = calculateWeightedAverage(w, g, 10);

    int maxIndex = findMaxIndex(g, 10);

    cout<<"weighted average:"<<weightedAverage<<endl;
    cout<<"Score with more impact"<<maxIndex+ 1<<"with number"<<g[maxIndex]<<endl;

    return 0;

}

