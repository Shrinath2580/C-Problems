#include<iostream>
using namespace std;

void update(int **p) { 
    // p = p + 1;
    // kuch change hoga kya ?? -> NO !!

    // *p = *p + 1;
    // // kuch change hoga kya ?? -> YES !!

    **p = **p + 1;
    // // kuch change hoga kya ?? -> YES !!

}

int main(){

    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << endl << endl << "Sab sahi chal raha hai " << endl << endl;
/*
    cout << "printing p " << p << endl << endl;
    cout << "address of p " << &p << endl << endl;
*/

/*
    cout << *p2 << endl << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl << endl;

    cout << &p << endl;
    cout << p2 << endl; 
*/
/*
    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl << endl;
    update(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;
*/


    return 0;
}