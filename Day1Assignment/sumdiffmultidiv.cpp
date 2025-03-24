//Take two numbers as input and preforms addition,substraction,Multiplication,and Division .Display the results
#include<iostream>
using namespace std;
int main(){
    int a,b,sum,sub,pr,div;
    //sub=substraction
    //pr=product
    //div=division
    cout<<"Enter the first number=";
    cin>>a;
    cout<<"Enter the second number=";
    cin>>b;
    sum=a+b;
    sub=a-b;
    pr=a*b;
    div=a/b;
    cout<<sum<<" ";
    cout<<sub<<" ";
    cout<<pr<<" ";
    cout<<div;
}