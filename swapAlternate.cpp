#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SwapAlternate(int arr[], int n){
    for(int i = 0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
    
}

int main(){
    int arr[6] = {2,1,4,3,6,5};
    int odd[7] = {9,8,7,6,5,4,3};

    SwapAlternate(arr, 6);
    PrintArray(arr, 6);
    SwapAlternate(odd, 7);
    PrintArray(odd, 7);

}