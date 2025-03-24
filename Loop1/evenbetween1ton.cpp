//WAP even 1 to n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number=";
    cin>>n;
    cout<<"Even nuber is\n";
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<"\n";
        }
    }
}