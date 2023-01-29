#include<iostream>
using namespace std;


bool search(int arr[], int n, int key) {

    for(int i = 0; i<n; i++) {
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main() {

    int arr[10] = {1,3,4,5,2,6,-4,26,21,19};

    //whether 1 is present in arr or not. 
    int key;
    cout << "Enter the key that you are looking for :" << endl;
    cin >> key;

    bool found = search(arr, 10, key);
    if(found == 1){
        cout << "Key is Present" << endl;
    }
    else{
        cout << "Key is Absent";
    }
    return 0;
}