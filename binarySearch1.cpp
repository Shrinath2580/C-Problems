#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        
        }
        else if(key < arr[mid]){ //left me jao
            e = mid - 1;

        }
        else{ //right mejao
            s = mid + 1;

        }
        mid = s + (e-s)/2;
    }
    return ans;

}

int lastOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key < arr[mid]){ //left me jao
            e = mid - 1;

        }
        else{ //right mejao
            s = mid + 1;

        }
        mid = s + (e-s)/2;
    }
    return ans;

}


int main() {

    int even[9] = {1,4,6,6,6,6,6,6,7};

    cout << "The First Occurence of 6 is at Index " << firstOcc(even, 9, 6) <<endl;
    
    cout << "The Last Occurence of 6 is at Index " << lastOcc(even, 9, 6) <<endl;
    
    return 0;
}
