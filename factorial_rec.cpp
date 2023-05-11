#include<iostream>
using namespace std;

int factorial(int n){

    //base case is mandatory
    if(n == 0)
        return 1;

    int smallerProblem = factorial(n-1);        // recursive statement is also mandatory
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main(){

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;

}