//5. WAP to print the sum of all the even digits of a given number.
//Sample Input: 4556
//Output: 10
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  number=";
    cin>>n;
    int sum=0;
    while(n>0){
        if((n%10)%2==0){
        sum=sum+n%10;
        }
        n=n/10;
}
cout<<"sum of all even digit="<<sum;
}

    