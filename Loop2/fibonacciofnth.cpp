#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  nth term=";
    cin>>n;
    int a=1,b=1,sum=0;
    for(int i=3;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;

    }
    cout<<sum;
}