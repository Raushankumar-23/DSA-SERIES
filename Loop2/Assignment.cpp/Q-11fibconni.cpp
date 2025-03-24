//11. Display Fibonacci series up to 10 terms. 
//Note: The Fibonacci Sequence is a series of numbers. The next number is found by adding up 
//the two numbers before it. The first two numbers are 0 and 1. For example, 0, 1, 1, 2, 3, 5, 8, 
//13, 21. The next number in this series above is 13+21 = 34.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms=";
    cin>>n;
    int a=0,b=1,sum=0;
    for(int i=1;i<=n;i++){
        if(i==1) cout<<0<<"\n";
        else if(i==2) cout<<1<<"\n";
        else{
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<"\n";
        }
    }
    //<<sum;
}