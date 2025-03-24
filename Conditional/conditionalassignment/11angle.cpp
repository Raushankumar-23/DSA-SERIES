//The minimum angle between hour and minute hand when the time is 9 angle is 90 degress.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int h,m;
    cout<<"Enter hour=";
    cin>>h;
    cout<<"Enter minutes=";
    cin>>m;
    int  h_a=h*30;
    int m_a=m*6;
    int diff=abs(h_a-m_a);
    if(diff>180){
        diff=360-diff;
        cout<<"minumim angle "<<diff;
    }
    else
    cout<<diff;

}



