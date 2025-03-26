//10. Print the following pattern
//Input: n = 4
//Output:
//   *
//  **
// ***
//****
// ***
//  **  
//   *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int m=0;
    int p=0;
    for(int i=n;i>0;i--){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        m++;
        for(int k=1;k<=m;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n;i>0;i--){
        p++;
        for(int j=1;j<=p;j++){
            cout<<" ";
        }
        for(int k=1;k<=i-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
}