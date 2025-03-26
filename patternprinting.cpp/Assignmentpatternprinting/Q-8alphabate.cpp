//Print the following pattern
//Input: n = 4
//Output:
//   A
//  AB
// ABC
//ABCD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row :";
    cin>>n;
    int m=0;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        m++;
        for(int k=1;k<=m;k++){
            cout<<char(k+64);
        }
        cout<<"\n";
    }
}