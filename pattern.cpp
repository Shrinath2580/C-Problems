#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void printTriangle(int n){
        int start = 1;
        for (int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
            if(i%j==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
            cout<<endl;
        }

    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        Solution ob;
        ob.printTriangle(n);

    }
    return 0;
}