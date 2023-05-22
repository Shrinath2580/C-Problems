/*https://www.codingninjas.com/codestudio/problems/quick-sort_983625?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_15
*/

#include <bits/stdc++.h> 
using namespace std;

int partition(vector<int>& arr, int s, int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);

    //left and right wala part sambhal lete hai
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    } 

    return pivotIndex;
}

void solve(vector<int>& arr, int s, int e){

    // base case
    if(s >= e)
        return ;

    // partition karenge 
    int p = partition(arr, s, e);

    // left part sort karo
    solve(arr, s, p-1);

    //right part sort karo
    solve(arr,p+1,e);
}


vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    solve(arr,0,arr.size()-1);
    return arr;

}
