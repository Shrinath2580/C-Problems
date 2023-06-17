#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s1 = "care";
    string s2 = "race";
    int asci1 = 0;
    int asci2 = 0;
    
    for(int i = 0; i<s1.length(); i++){
        asci1 +=(int)s1[i];
        asci2 +=(int)s2[i];
    }
    
    cout << asci1 << endl;
    cout << asci2 << endl;
    
    if(asci1 == asci2){
        cout << "Anagram" << endl;
    }
    else
        cout << "Not an Anagram " << endl;
    
    
    return 0;
}