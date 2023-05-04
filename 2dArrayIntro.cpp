#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int row = 0; row<3; row++){
        for(int col = 0;col<3; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

void printRowSum(int arr[][3], int row, int col){
    cout<<"Row wise sums are as follows -> "<<endl;
    for(int row = 0; row<3; row++){
        int sum = 0;
        for(int col = 0; col<3;col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

void printColSum(int arr[][3], int row, int col){
    cout<<"Col wise sums are as follows -> "<<endl;
    for(int col = 0; col<3; col++){
        int sum = 0;
        for(int row = 0; row<3;row++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row = 0; row<3; row++){
        int sum = 0;
        for(int col = 0; col<3; col++){
            sum += arr[row][col];
        }

        if(sum>maxi){
                maxi = sum;
                rowIndex = row;
        }
    }
    cout<<"the maximum sum is  " << maxi <<endl;
    return rowIndex;
} 

int main(){

    //create 2d array
    int arr[3][3];
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


    //taking input -> row wise input
    cout<<"Entering the elements"<<endl;
    for(int row = 0; row<3; row++){
        for(int col = 0; col<3; col++){
            cin>>arr[row][col];
        }
    }

/*
    //taking input -> col wise input
    for(int row = 0; row<4;row++){
        for(int col = 0; col<3; col++){
            cin>>arr[col][row];
        }
    }
    
*/
   //print
    cout<<"Printing the elements"<<endl;
    for(int row = 0; row<3; row++){
        for(int col = 0; col<3; col++){
            cout<<arr[row][col]<<" ";
        } 
        cout<<endl;
   }
/*
    cout<<"Enter the element you want to search : "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    printRowSum(arr, 3,3);
    printColSum(arr,3,3);
*/

    cout<<"max row is at index " << largestRowSum(arr,3,3)<<endl;

    return 0;
}