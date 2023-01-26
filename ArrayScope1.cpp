// Q. Print sum of all elements in an array 

#include<iostream>
using namespace std;

void sum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i<n ; i++) {
        //cout << arr[i] << " ";
        sum += arr[i];
    }

    cout << "The sum of all elements of the given array is " << sum << endl;
}


int main() {

    int size;
    cin >> size;

    int arr[100];

    for( int i = 0; i<size; i++) {
        cin >> arr[i];
    }
    cout<< endl;

    sum(arr, size);

    return 0;
}