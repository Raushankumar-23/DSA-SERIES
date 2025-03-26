#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row=";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
           // if(j%2!=0){
            cout<<a;
            a=a+2;
        }
        cout<<"\n";
    }
}