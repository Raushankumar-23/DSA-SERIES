//4. Print the following pattern
//Input n = 4
//Output:
//*
//**
//*** 
//****
//*** 
//** 
//*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

}