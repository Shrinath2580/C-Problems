//make pairs of maximum and minimum elements of an array 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    for(int i = 0 ; i<n; i++){
        cout << arr[i] << " ";
    } cout << endl;
    
    int s = 0;
    int e = n-1;
    
    while(s<e){
        cout << "(" << arr[e--] << " , " << arr[s++] << ")" << endl;
        
    }
    if(s == e){
            cout << "(" << arr[s] << " , " << "0" << ")" << endl;
        }
    
    
    return 0;
}