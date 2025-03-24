//Take a positive integer input and tell if it is divisible by 5 and 3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the positive number=";
    cin>>n;
    if(n%3==0 &&  n%5==0){
        cout<<n <<" is divisible by 3 and 5";
    }
    else{
        cout<<n<<" is not divisible by 3 and 5";
    }
}