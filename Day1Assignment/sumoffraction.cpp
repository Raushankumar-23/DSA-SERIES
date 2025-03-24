//Given 2 fractions,find the sum of those 2 fractions.Take the the numerator and denominator values of the fractions rom the user.
#include<iostream>
using namespace std;
int main(){
    int n1,n2,d1,d2;
    cout<<"Enter the n1=";
    cin>>n1;
    cout<<"Enter the d1=";
    cin>>d1;
    cout<<"Enter the n2=";
    cin>>n2;
    cout<<"Enter the d2=";
    cin>>d2;
    float sum=(n1*d2+n2*d1)/(d1*d2);
    cout<<"sum of fraction is : "<<sum;
}