//Given the radius of the circle predict hether numerically area of this circle is largest than the circumference or not.
#include<iostream>
using namespace std;
int main(){
    int r;
    float C,A;
    cout<<"Enter the radius r=";
    cin>>r;
    C=2*3.14*r;
    A=3.14*r*r;
    if(A>C){
        cout<<"Area is greatest than circumference";
    }
    else  if(A==C) cout<<"Area is equal to circumference";
    else{
        cout<<"Area is not greatest than circumference";
    }
}