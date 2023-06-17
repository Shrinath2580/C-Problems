#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s1 = "care";
    string s2 = "race";
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int cnt = 0;
    
    for(int i = 0; i<s1.length(); i++){
        if(s1[i] == s2[i]){
            cnt++;
        }
    }
    
    // for(int i = 0; i<s1.length(); i++){
    //     for(int j = 0; j<s2.length(); j++){
            
    //         if(s1[i] == s2[j]){
    //             cnt++;
    //         }
    //     }
    // }
    
    if(cnt == s1.length()){
        cout << "It is an Anagram";
    }
    else{
        cout << "not an Anagram";
    }
    
    return 0;
}