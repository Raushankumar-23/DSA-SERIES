//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line
#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the  x1=";
    cin>>x1;
    cout<<"Enter the y1=";
    cin>>y1;
    cout<<"Enter the  x2=";
    cin>>x2;
    cout<<"Enter the y2=";
    cin>>y2;
    cout<<"Enter the  x3=";
    cin>>x3;
    cout<<"Enter the y3=";
    cin>>y3;
    float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        cout<<"all the three points fall on one straight line"; 
    }
    else{
        cout<<"all the three points not fall on one straight line"; 
    }
    }