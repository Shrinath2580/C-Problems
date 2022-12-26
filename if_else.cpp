#include<iostream>
using namespace std;

int main() {

    int a;
    cout << "Enter a number:" <<endl;
    cin>>a;

    if (a>0) {
        cout<< "A is a positive number" << endl;
    }

    else {
        cout<< "A is a negative number" <<endl;
    }



    
    int a,b;
    cin>>a>>b;

    if (a>b) {
        cout<< "A is Greater" << endl;
    }

    else {
        cout<< "B is greater" << endl;
    }
    


   int a;
   cout<< "Enter the value of A: " << endl;
   cin>>a;

   if (a>0){
    cout<< "A is positive";
   }
   else if (a<0) {
    cout << "A is negative";
   }
   else {
    cout<< "A is Zero";
   }
   


  int a=9;
  if(a==9) {
    cout<<"NINEY";
  }

  if (a>0) {
    cout<<" POSITIVE";
  }

  else {
    cout<<"NEGATIVE";
  }
  


    int a=2;
    int b=a+1;

    if ((a=3)==b) {
        cout<<a;
    }
    else{
        cout<<a+1;
    }



    int a=24;

    if(a>20){
        cout<<"John";
    }
    else if(a==24){
        cout<<"Akshay";
    }
    else{
        cout<<"Mishra";
    }
    cout<<a;
 



    char ch;
    cin>>ch;
    if (ch>=65&&ch<=90){
        cout<< "This is Upper case";
    }
    else if (ch>=48&&ch<=57){
        cout<< "THis is Numeric";
    }
    else if (ch>=97&&ch<=122){
        cout<< "This is Lower Case";
    }
    else{
        cout<< "THis is Unknown";
    }






}
