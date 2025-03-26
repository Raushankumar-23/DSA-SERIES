//Print the following pattern
//Sample Input: n = 4
//Output:
//    ****
//   ****
//  ****
// ****
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
   