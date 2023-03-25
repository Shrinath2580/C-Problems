#include<bits/stdc++.h>
using namespace std;

int chocolates(int t,int n){
    int n1 = 100-n, c3 = 0, c7 = 0;
    while(t > n){
        t = t-3;

    }
}

int main(){
    int b[100] = true;
    for (int i = 99; i>0; i--) {
        if(i+3 <= 100 && b[i+3])
            b[i] = true;
        if(i+7<=100 && b[i+7])
            b[i] = true;
    }

}