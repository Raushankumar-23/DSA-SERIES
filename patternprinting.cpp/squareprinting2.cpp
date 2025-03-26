#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number=";
    cin>>n;
    cout<<"Enter the number=";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

}