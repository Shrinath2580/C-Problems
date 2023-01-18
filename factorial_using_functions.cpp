#include<iostream>
using namespace std;

//factorial
int fact(int n){

    //cin>>n;

    int fact = 1;

    for(int i = 1; i<=n; i++) {
        fact = fact * i;

    } 
    return fact;

}

int nCr(int n, int r) {
    //cin >> n >> r;

    int numer = fact(n);

    int denom = fact(r) * fact(n-r);

    return numer/denom; 
}

int main() {

    int n , r;

    cin >> n >> r;

    cout<< "The output of nCr is " << nCr(n,r) <<endl; 
}
