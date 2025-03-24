//12. Reverse a given integer number 
//Input: 76542 
//Output: 24567
#include<iostream>
using namespace std;
int main(){
    int n,r=0;
    n=76542;
    //cout<<"Enter the number=";
    //cin>>n;
    while(n>0){
        r=r*10+n%10;
        n=n/10;
    }
    cout<<"reverse of number="<<r;
}