#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the total amount: ";
    cin>>n;

    switch(n){
            case 1330: {int digit = n / 100;
                        n = n - (digit*100);
                        cout<<"The number of 100rs notes are: "<<digit<<endl;
                    }
        case 50: {int digit = n / 50;
                    n = n - (digit*50);
                    cout<<"The number of 50rs notes are: "<<digit<<endl;
                }

        case 20: {int digit = n / 20;
                    n = n - (digit*20);
                    cout<<"The number of 20rs notes are: "<<digit<<endl;
                }

        case 10: {int digit = n / 1;
                    n = n - (digit*10);
                    cout<<"The number of 1rs notes are: "<<digit<<endl;
                }
    }
}