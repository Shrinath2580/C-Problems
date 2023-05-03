/*https://www.codingninjas.com/codestudio/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11

*/
 
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int key){
    // base case
    //element not found
    if(s > e)
        return -1;

    int mid = s + (e-s)/2;

//element found
    if(arr[mid] == key)
        return mid;

    if(arr[mid] < key)
        return binarySearch(arr, mid + 1, e , key);
    else
        return binarySearch(arr, s, mid - 1, key);


}


int search(vector<int>& nums, int target) {
    int ans = binarySearch(nums, 0, nums.size()-1, target);
}