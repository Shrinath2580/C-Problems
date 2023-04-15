#include<iostream>
using namespace std;

void sumArray(int arr[], int n){
    int sum = 0;
    
    for(int i = 0; i<n; i++){
        sum  = sum + arr[i];
    }

    cout<<sum<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    sumArray(arr, n);

}