//1. Print the following pattern
//1111
//2222
//3333
//4444
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<i;
        }
        cout<<"\n";
    }
}