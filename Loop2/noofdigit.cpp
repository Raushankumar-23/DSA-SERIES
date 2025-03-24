#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  number=";
    cin>>n;
    int a=n;
    int count=0;
    while(n>0){
    n=n/10;
    count++;
}
if(a==0) cout<<"No of digit="<<1;
else  cout<<"No of digit="<<count;
}

    