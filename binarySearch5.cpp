//Q. Find Square Root of a Number.

#include<iostream>
using namespace std;

int sqrrt(int i) {
    int s = 0;
    int e = i;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;

    while (s<=e) {
        long long int square = mid*mid;
        if (square == i) {
            return mid;
        }

        if (square < i) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }

        

        mid = s + (e-s)/2;
    }
    return ans;
}

double moreprecision(int x, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i < precision; i++) {
        factor = factor / 10;

        for(double j = ans; j*j<x; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    
    int x;
    cout << "Enter the Number " << endl;
    cin >> x;

    int tempSol = sqrrt(x);
    cout << "Answer will be " << moreprecision(x, 3, tempSol);
    return 0;
}