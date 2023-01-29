#include<iostream>
#include<climits>
using namespace std;

int getMin(int arr[], int n) {

    int Min = INT_MAX;
    for (int i = 0; i<n; i++) {
        
        Min = min(Min, arr[i]);

        //or
        //if(arr[i] < Min) {
        //    Min = arr[i];
        //}
    }

    //returning MIN
    return Min;
}


int getMax(int arr[], int n) {

    int Max = INT_MIN;
    for (int i = 0; i<n; i++) {
        
        Max = max(Max, arr[i]);

        //or
        //if(arr[i] > Max) {
          //  Max = arr[i];
        //}
    }

    //returning MAX
    return Max;
}

int main() {

    int size;
    cin >> size;

    int arr[100];
    
    //taking input in array 
    for(int i = 0; i<size; i++) {
        cin >> arr[i];
    }
    cout<<endl;

    cout << "Maximum Value in this Array is " << getMax(arr, size) <<endl;
    cout << "Minimum Value in this Array is " << getMin(arr, size) << endl;

    return 0;
}