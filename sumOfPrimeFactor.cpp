#include <bits/stdc++.h>
using namespace std;

int Sum(int n)
{
	int i =2, sum = 0;
	while(n != 1){
	    if(n % i == 0){
	        sum = sum + i;
	    }
	    while(n % i == 0){
	        n = n / i;
	    }
	    i++;
	} 
	return sum;
}

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
	cout << "Sum of prime divisors are: "
		<< Sum(n)<<endl;
}