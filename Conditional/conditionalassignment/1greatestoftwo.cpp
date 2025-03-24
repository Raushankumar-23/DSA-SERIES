//Take 2 integer input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number a=";
    cin>>a;
    cout<<"Enter the number b=";
    cin>>b;
    if(a>b){
        cout<<a<<" is greatest";
    }
    else{
        cout<<b<<" is greatest";
    }
}