#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the  number of term=";
    cin>>n;
    cout<<"Enter the  number of term=";
    cin>>m;
    int hcf;
    int greater;
    if(n>m) greater=n;
    else greater=m;
    while(1){
        if(n%greater==0&&m%greater==0){
            hcf=greater;
            break;
        }
        else greater--;
    }
    cout<<hcf;
}
    