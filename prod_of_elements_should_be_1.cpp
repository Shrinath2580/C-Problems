//prod of all elements in an array should be 1. return the steps by increasing or decreasing each element by 1;
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int arr[n];
    int count = 0;
    int prod = 1;
    
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i<n; i++){
        if(arr[i] < 0){
            while(arr[i] != (-1)){
                arr[i] = arr[i] + 1;
                count++;
            }
            prod = prod * arr[i];
        }
        
        if(arr[i] > 0){
            while(arr[i] != 1){
                arr[i] = arr[i] - 1;
                count++;
            }
            prod = prod * arr[i];
        }
        
        if(arr[i] == 0){
            if(prod == (-1)){
                arr[i] = arr[i] - 1;
                count++;
                prod = prod * arr[i];
            }
            else{
                arr[i] = arr[i] + 1;
                count++;
                prod = prod * arr[i];
            }
        }
        
        if(prod != 1){
                while(arr[i] != 1){
                    arr[i]+=1;
                    count++;
                }
            
            prod = prod * arr[i];
        }
    }
    
    cout << "The final product is  " << prod << endl;
    cout << "The total steps required is " << count << endl;
    

    return 0;
}