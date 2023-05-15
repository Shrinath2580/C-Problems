#include<iostream>
using namespace std;

void print(int* arr, int s, int e){
    for(int i = s; i<=e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int* arr, int s, int e, int key){

    print(arr,s,e);

    //base case
    if(s > e)
        return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == key)
        return true;

    if(arr[mid] < key){
        bool remaining = binarySearch(arr, mid+1, e, key);
        return remaining;
    }
    else{
        bool remaining = binarySearch(arr, s, mid-1, key);
        return remaining;
    }

}

int main(){

    int arr[5] = {4,8,16,22,34};
    int size = 5;
    int key = 4;

    bool ans = binarySearch(arr,0,4,key);

    cout << endl << endl;
    if(ans)
        cout << "element found";
    else
        cout << "Nahi mila kuchh ";
    
    cout << endl << endl;


    return 0;
}