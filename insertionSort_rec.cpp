#include<iostream>
using namespace std;

void sortArray(int *arr, int i, int n){
    int j = i-1;
    int temp = arr[i];

    //base cae - already sorted
    if(n == 0 || n == 1)
        return ;

    
    for(; j>=0; j++){

        if(arr[j] > temp){
            //shift
            arr[j+1] = arr[j];
        }

        else    // ruk jao
            break;
    }
    arr[j+1] = temp;

    sortArray(arr, i+1, n);
}



int main(){

    int arr[5] = {2,5,1,6,9};
    sortArray(arr,1,5);

    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}