//Take input of principal ,time and rate find the simple intrest
#include<iostream>
using namespace std;
int main(){
    int P,R,T,SI;
    //P=principal amount
    //R=rate of intrest
    //T=time
    cout<<"Enter the principal amount ";
    cin>>P;
    cout<<"Enter the rate of intrest ";
    cin>>R;
    cout<<"Enter the time period ";
    cin>>T;
    SI=(P*R*T)/100;
    cout<<SI;
}