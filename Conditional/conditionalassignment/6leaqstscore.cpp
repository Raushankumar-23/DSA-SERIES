//If the marks of A,B and C are input through the keyboard,write a program to determine the student score least marks
#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Enter the marks of first student A=";
    cin>>A;
    cout<<"Enter the marks of second student B=";
    cin>>B;
    cout<<"Enter the marks of third student C=";
    cin>>C;
    if(A<B){
        if(A>C){
            cout<<"C is perform least score";
        }
        else{
            cout<<"A is perform least score";
        }
    }
    else{
        if(B>C){
            cout<<"C perform least score";
        }
        else{
            cout<<"B is perform least score";
        }
    }
}