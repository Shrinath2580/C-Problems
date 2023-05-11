#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0){    //default args wali game rightmost arguments se hi chalu hogi. pehle yaha pe start ko default karna padega fir hi hum 'n' ko default kar payenge nahi toh nahi kar payenge. 
    for(int i = start; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main(){

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size);
    cout << endl;
    print(arr, size, 2);

    return 0;
}