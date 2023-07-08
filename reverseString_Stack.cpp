#include<iostream>
#include<stack>
using namespace std;

int main() {

    string st = "shrinath";
    stack<char> s;

    for(int i = 0; i<st.length(); i++){
        s.push(st[i]);
    }

    string ans = "";

    while(!s.empty()) {
        ans.push_back(s.top());

        s.pop();       
    }

    cout << "The reverse of string is " << ans << endl;

}