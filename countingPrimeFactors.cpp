#include<bits/stdc++.h>
using namespace std;

int PrimeFact(int n){
    int count2 = 0, count3 = 0;

    while(n != 1){
        if(n % 2 == 0 ){
            n /= 2;
            count2++;
        }
        else if(n % 3 == 0){
            n /= 3;
            count3++;
        }
        else
            break;
    }

    if(n==1){
        cout<<"2 X "<<count2<<endl<<"3 X "<<count3;
    }
    else
        cout<<"not possible";    
}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    PrimeFact(n);

    return 0;
}