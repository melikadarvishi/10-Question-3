/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;


void getArray(int arr[], int n) {

   cout<<"Please enter a number for each member:\n";

    for (int i = 0; i < n; i++) {

        cin >> arr[i];

    }

}


void printArray(int arr[], int n) {

   cout<<"\nEntered array:\n";

    for (int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

    cout << endl;

}


int findMax(int arr[], int n) {

    int max = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] > max) {

            max = arr[i];

        }

    }

    return max;

}


int findMin(int arr[], int n) {

    int min = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] < min) {

            min = arr[i];

        }

    }

    return min;

}


int sumArray(int arr[], int n) {

    int sum = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

    }

    return sum;

}


float avgArray(int arr[], int n) {

    return (float)sumArray(arr, n) / n;

}


void sortArray(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);

            }

        }

    }

}


void copyArray(int arr1[], int arr2[], int n) {

    for (int i = 0; i < n; i++) {

        arr2[i] = arr1[i];

    }

}


int searchArray(int arr[], int n, int x) {

    for (int i = 0; i < n; i++) {

        if (arr[i] == x) {

            return i;

        }

    }

    return -1;

}


int main() {

    int n;
    cout<<"Enter the number of members of the presentation:";

    cin >> n;


    int arr[n];

    getArray(arr, n);


    printArray(arr, n);

    cout<<"\nThe largest member of the offer:"<<findMax(arr,n)<<endl;
    
    cout<<"The smallest member of the presentation:"<<findMin(arr,n)<<endl;
    
    cout<<"Sum of presentation elements:"<<sumArray(arr,n)<<endl;
    
    cout<<"Average presentation elements:"<<avgArray(arr,n)<<endl;

    int sortedArr[n];

    copyArray(arr, sortedArr, n);

    sortArray(sortedArr, n);

    cout<<"\nSorted array:\n";

    printArray(sortedArr, n);


    int x;

    cout<<"\nEnter a value to search for:";
    cin >> x;

    int index = searchArray(arr, n, x);

    if (index!= -1) {

        cout<<"the amount of"<<x<< "in index"<<index<<"found."<<endl;

    } else {

        cout<<"the amount of"<<x<<"Not found in the presentation"<<endl;
    }


    return 0;

}

