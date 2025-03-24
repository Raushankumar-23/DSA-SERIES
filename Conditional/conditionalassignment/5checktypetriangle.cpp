//write a program to input sides of triangle and check whether a traingle is aquilateral, scalene or isoseles traingle.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first side of triangle a=";
    cin>>a;
    cout<<"Enter the second side of triangle b=";
    cin>>b;
    cout<<"Enter the third side of triangle c=";
    cin>>c;
    if((a==b)&&(b==c)){
        cout<<"equiletral triangle";
    }
    else if((a!=b)&&(b!=c)&&(a!=c)){
        cout<<"scales triangle ";
    }
    else{
        cout<<"isoleses triangle";
    }
}