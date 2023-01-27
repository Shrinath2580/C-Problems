//Q. Find the pivot in an Array

#include<iostream>
using namespace std;

int getPivot(int arr[], size) {
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while (s<e) {
        if(arr[mid] == arr[0]) {
            s = mid + 1;

        }
        else {
            e = mid;
        }
        mid = s +(e-s)/2;
    }
    return s;
}

int binarysearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;
    int mid = start + (end - start)/2;

    while(s<e) {
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main( int arr[], int n, int key) {
    
    int pivot = getPivot{arr, n};
    if(key >= arr[pivot] && key <= arr[n-1]) {
        return binarysearch(arr, pivot, n-1, key);
    }
    else {
        return binarysearch{arr, 0, pivot-1, key};
    }

    return 0;
}
