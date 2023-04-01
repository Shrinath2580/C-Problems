#include <bits/stdc++.h> 
using namespace std;

int main(){
        int n;
        cout<<"Enter the number of switch";
        cin>>n;
        int count=0;
        bool b[1000];
        b[n+1] = true;
        for(int i=1;i<n;i++)
            b[i] = true;
        for(int i=2;i<n;i=i+2)
            b[i]=false;
        for(int i=3;i<=n;i++)
        {
            for(int j=i;j<=n;j=i+j)
            {
                if(b[j])
                    b[j]=false;
                else
                    b[j]=true;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(b[i])
                count++;
        }
        cout<<count;
}