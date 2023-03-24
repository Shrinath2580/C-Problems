#include<bits/stdc++.h>
using namespace std;

// lowercasing is left 

bool isAnagram(string str1, string str2){

    //Get length of both strings
    int n1 = str1.length();
    int n2 = str2.length();

    //if length of both strings is not same 
    // then it cannot be anagram 

    if(n1 != n2)
        return false;

    //sort both the strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    //compare sorted strings
    for(int i = 0; i<n1; i++){
        if(str1[i] != str2[i])
            return false;
    
        return true;
    }

}

//driver code
int main(){
    string str1;
    string str2;

    cout<<"Enter your first string: ";
    cin>>str1;
    cout<<"Enter your second string: ";
    cin>>str2;

    if(isAnagram(str1,str2))
        cout<<"The two strings are Anagram of each other";
    else   
        cout<<"The two strings are not Anagram of each other";

    return 0;
}