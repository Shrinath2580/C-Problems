#include<bits/stdc++.h>
using namespace std;

void reverseString(string& s, int i, int j){

    cout << "call received for " << s << endl;

    // base case
    if(i>j)
        return;

    swap(s[i], s[j]);
    i++;
    j--;

    //Recursive Call
    reverseString(s,i,j);
}

int main(){

    string s = "hello";

    reverseString(s,0,s.length()-1);
    
    cout << "Reverse of the string is " << s << endl;

    return 0;
}