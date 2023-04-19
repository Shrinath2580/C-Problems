#include<iostream>
using namespace std;

int getlength(char c[]){
    int count = 0;
    for(int i = 0; c[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char c[20];
    cout<<"Enter your name: "<<endl;
    cin>>c;

    cout<<"Your name is "<<c<<endl;

    cout<<"Length of your name is "<<getlength(c)<<endl;

    return 0;
}