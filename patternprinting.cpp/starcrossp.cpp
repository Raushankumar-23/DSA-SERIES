#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the odd number=";
    cin>>n;
    int mid=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j||(i+j)==6) cout<<"*";
            else cout<<" ";
    }
        cout<<"\n";
    }
}