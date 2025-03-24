//Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the positive number=";
    cin>>n;
    if(n%5==0||n%3==0){
        if(n%15!=0){
            cout<<n<<" is divisible by 5 or 3 but not 15";
        }
        else{
            cout<<n<<" is divisible by 5 or 3 but also divisible 15";
        }
    }
    else{
        cout<<n<<" is not divisible by 5 or 3";
    }
}
