#include<iostream>
using namespace std;

int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;

    /*yaha pe jo "num" hai voh ek local variable hai,  voh func ke ander hi initiate hua hai toh outside the function it will be dead. Same is the case with "ans". toh agar ek function ke variables function ke baad clead hi ho jaayenge toh mein start mein "int& func" yaha pass hi kya kar raha hu. toh yeh bohot hi dangerous practice hai aur yeh bohot bad practice hai.  */
}

int* fun(int n){
    int* ptr = &n;
    return ptr;
}

void update2(int& n){
    n++;
}

void update(int n){
    n++;
}


int main(){

    int i = 5;

    // create a ref variable
/*
    int& j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
*/

    int n = 5;
    cout << "Before " << n << endl;
    // update(n);
    update2(n);
    cout << "After " << n << endl;

    func(n);
    fun(n);

    return 0;  
}