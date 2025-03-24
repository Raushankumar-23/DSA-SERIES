//Given the length and breath of rectangle, write aprogram to find whether numerically the area of rectangle is greater than its perimeter
#include<iostream>
using namespace std;
int main(){
    int l,b,A,P;
    cout<<"Enter the length of rectangle l=";
    cin>>l;
    cout<<"Enter the breath of rectangle b=";
    cin>>b;
    A=l*b;
    P=2*(l+b);
    if(A>P){
        cout<<"Area of rectangle is greater than perimeter";
    }
    else if(A==P)  cout<<"Area of rectangle is greater than perimeter";
    else{
        cout<<"Area of rectangle is not greater than perimeter";
    }
}