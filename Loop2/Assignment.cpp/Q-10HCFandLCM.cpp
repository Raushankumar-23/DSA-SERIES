//10. Write a program that will take 2 numbers as input and prints the LCM and HCF of those 2 numbers.
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the  number of term=";
    cin>>n;
    cout<<"Enter the  number of term=";
    cin>>m;
    int lcm;
    int greater;
    if(n>m) greater=n;
    else greater=m;
    while(1){
        if(greater%n==0&&greater%m==0){
            lcm=greater;
            break;
        }
        else greater++;
    }
    cout<<lcm;
}
    