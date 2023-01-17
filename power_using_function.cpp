#include<iostream>
using namespace std;



// Power 
int power() {
    int a , b;
    cin >> a >> b;

    int ans = 1;

    for(int i = 1; i <= b; i++) {
        ans = ans * a;

    }

    return ans;

}

int main() {

    int a , b;
    cin >> a >> b;

    int answer = power(a,b);
    cout << "Answer is " << answer << endl;

    int c , d;
    cin >> c >> d;

    answer = power(c,d);
    cout << "Answer is " << answer <<endl; 


    int ans = power();
    cout << "Answer is " << ans << endl;

    ans = power();
    cout << "Answer is " << ans << endl;

    ans = power();
    cout<< "Answer is " << ans << endl;
}
