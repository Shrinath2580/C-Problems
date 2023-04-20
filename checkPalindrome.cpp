#include<iostream>
using namespace std;

bool checkPalindrome(char c[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(c[s] != c[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char c[], int len){
    int s = 0;
    int e = len - 1;

    while(s<=e){
        swap(c[s++], c[e--]);
    }
}

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
    int len = getlength(c);
    reverse(c,len);
    cout<<"Reverse of your name is "<<c<<endl;

    cout<<"Is your name Palindrome: "<<checkPalindrome(c,len)<<endl;


    return 0;
}