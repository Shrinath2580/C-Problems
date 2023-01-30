#include<iostream>
using namespace std;


//Q. Sort 012
// You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.
void printArray(int arr[], int n) {

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void sortTwo(int *arr, int n)
{
   int low = 0;
   int mid = 0;
   int high = n-1;
    
    while(mid<=high)
    {
        if(arr[mid]==0){
            cout << arr[mid]<<endl;
            swap(arr[low],arr[mid]);
            low++; 
            mid++;    
        }
        
        else if(arr[mid]==1)
         mid++;
        
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){

    int arr[9] = {0,2,2,1,0,1,1,0,2};

    sortTwo(arr, 9);
    printArray(arr, 9);

    return 0;
}

