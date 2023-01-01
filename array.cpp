/*Homework Question:
Entire array ko kisi bhi value se initialise kaise kare ?


//1.
#include<iostream>
using namespace std;

int main() {
    int n[10] = {[0 ... 9] = - 24};
    cout << n << endl;
}

//2.
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int val;
    cin >> val;

    int array[n];

    for (int i = 0; i<=n; i++) {

        array[i] = val;
    }

    for (int i = 0; i<=n; i++) {

        cout << array[i] << " ";
    }
    cout <<endl;
    return 0;
}
*/


//Arrays with Function
#include<iostream>
using namespace std;

void printArray(int arr[] , int size) {

    cout << "Printing the Array " << endl;
    //print the array
    for (int i = 0; i<size; i++) {

        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}

int main() {
    
    //declare
    int first[15] = {1,5,7,9};
    int n=15;

    printArray(first , 15);

    //initialize an array
    int second[10] = {0,1,2,3};
    n = 10;

    //accessing an element
    cout<< "Value at 2 Index is " << second[2] <<endl;
    printArray(second, n);

    int third[5] = {};
    n=5;
    printArray(third, 5);

    int thirdSize = sizeof(third) / sizeof(int);
    cout << "Size of Third is " << thirdSize << endl;
}   