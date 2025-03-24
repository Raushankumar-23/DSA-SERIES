//Take a floating-point number as input,typecast it into an integer, and print bothvaluee
#include<iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter the float value ";
    cin>>a;
    int p=(float)a;
    cout<<p<<" ";
    cout<<a;
}