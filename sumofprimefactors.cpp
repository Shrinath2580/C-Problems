#include <bits/stdc++.h>
using namespace std;

int Sum(int N)
{
	int SumOfPrimeDivisors[N+1] = { 0 };

	for (int i = 2; i <= N; ++i) {

		// if the number is prime
		if (!SumOfPrimeDivisors[i]) {

			// add this prime to all it's multiples
			for (int j = i; j <= N; j += i) {

				SumOfPrimeDivisors[j] += i;
			}
		}
	}
	return SumOfPrimeDivisors[N];
}

int main()
{
    int N;
    cout << "Enter the number:" << endl;
    cin >> N;
	cout << "Sum of prime divisors are: "
		<< Sum(N)<<endl;
}