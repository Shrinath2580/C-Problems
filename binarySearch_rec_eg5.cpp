#include<iostream>
using namespace std;

int firstOccurence(int* arr, int s, int e, int key){

    // base case    
    int ans = -1;
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        ans = mid;
        e = mid - 1;
    }
    else if(arr[mid] > key)
        firstOccurence(arr,s,mid-1,key);
    else
        firstOccurence(arr,mid+1,e,key);

    return ans;

}

int lastOccurence(int* arr, int s, int e, int key){

    // base case 
    int ans = -1;
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        ans = mid;
        s = mid + 1;
    }
    else if(arr[mid] > key)
        lastOccurence(arr,s,mid-1,key);
    else
        lastOccurence(arr,mid+1,e,key);
        

    return ans;

}

int main(){

    int arr[7] = {1,2,3,3,3,3,5};
    int size = 7;
    int key = 3;

    //int ans = firstOccurence(arr,0,6,key);
    cout << "the first occurence is at Index " << firstOccurence(arr,0,6,key) << endl;
    cout << "the last occurence is at Index " << lastOccurence(arr,0,6,key) << endl;

    return 0;
}


// nahi banra hai yeh question abhi toh 
// baadme dekhna padega iss pe beth ke 
