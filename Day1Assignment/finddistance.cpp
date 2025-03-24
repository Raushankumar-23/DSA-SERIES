//write a program to find the euclidean distance between two coordinates.take both the coordinate from the user as input
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    float dist;
    cout<<"Enter x1=";
    cin>>x1;
    cout<<"Enter y1=";
    cin>>y1;
    cout<<"Enter x2=";
    cin>>x2;
    cout<<"Enter y2=";
    cin>>y2;
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"distance is :"<<dist;

}