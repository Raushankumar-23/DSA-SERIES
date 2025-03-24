//Given a point (x,y), write a program to find out if it lies on the x-axis,y-axis or at the origion viz.(0,0)
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the  x=";
    cin>>x;
    cout<<"Enter the y=";
    cin>>y;
    if(x==0&&y==0){
        cout<<"point is origin";
    }
    else{
        if(x>0&&y==0){
            cout<<"point lies in x-axis";
        }
        else if(y>0&&x==0){
            cout<<"point lies in y-axis";
        }
        else{
            cout<<"point lies in quadrant";
        }
    }
}