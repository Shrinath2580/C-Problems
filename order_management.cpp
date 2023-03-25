#include<bits/stdc++.h>
using namespace std;



int main(){
    int num[4] = {101,102,103,108};
    int price[4] = {42,50,500,40};
    int stock[4] = {10,20,15,16};
    int total_cost;
    int n,m;
    int quant;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"Enter the Quantity: ";
    cin>>m;

    for(int i = 0; i<4; i++){
        if (n == num[i]){
            if(m <= stock[i]){
                total_cost = m * price[i];
                cout<<"Total Cost: "<<total_cost;
            }
            else{
                cout<<"not possible";
            }
        }
    }

    return 0;    

}