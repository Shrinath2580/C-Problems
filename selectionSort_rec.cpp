#include <bits/stdc++.h> 
using namespace std;

void print(int *arr,int n){
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

void sortArray(int *arr, int n, int i){
    print(arr,n);
    //base case
    if(n == 0 || n == 1)
        return ;
    
    int minIndex = 0;
    for(int j = i+1; j<n; j++){
        if(arr[j] < arr[minIndex])
            minIndex = j;
    }
    swap(arr[minIndex], arr[i]);
    sortArray(arr,n,i+1);
}

int main(){

    int arr[5] = {2,5,1,6,9};
    sortArray(arr,5,0);

    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}