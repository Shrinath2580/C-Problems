#include<iostream>
using namespace std;

int main() {
	int a;
    cin>>a;

    int sum=0;
    int i=1;
    while(i<=a) {
        sum=sum+i;
        i=i+1;
    }
    cout<<"value of sum is : "<<sum;
    // verification for the sum: sum= a/2(n+l) where a is number of sums; n is 1st no. & l is last no.
}