//Q. Find the pivot in an Array

#include<iostream>
using namespace std;

int getPivot(int arr[], int size) {
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }

        mid = s + (e-s)/2;
    }
    return s;
}


int main() {
    int arr[5] = {69,78,81,4,7};

    cout << "Pivot is " << getPivot(arr,5);
}
