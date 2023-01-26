#include<iostream>
using namespace std;


void update(int arr[] , int n){

    //updating array's second element
    arr[1]= {120};

    //printing the array
    cout << "Inside the Function" << endl;
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout << "Going back to the function" << endl << endl;

}

int main() {

    int arr[3] = {1,2,3};

    update(arr, 3);

    cout << "Printing the main array " << endl;
    //printing the array

    for(int i = 0; i<3; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}