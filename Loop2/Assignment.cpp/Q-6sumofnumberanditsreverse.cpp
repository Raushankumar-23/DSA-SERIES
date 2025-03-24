//6. WAP to print the sum of a given number and its reverse.
//Sample Input: 12
//Sample Output: 33 [12+21]
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number=";
    cin>>n;
    int p=n;
    int r=0,sum=0;//r-reverse sum-sum of number and its reverse
    while(n>0){
        r=r*10+n%10;
        n=n/10;
    }
    sum=p+r;
    cout<<"sum ofnumber and its reverse="<<sum;
}