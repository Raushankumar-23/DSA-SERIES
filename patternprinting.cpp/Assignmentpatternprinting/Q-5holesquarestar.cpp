//5. Print the following pattern
//Sample Input: m = 4, n = 6
//Sample Output:
//******
//*    *
//*    *
//******
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of row :";
    cin>>n;
    cout<<"Enter the number of column:";
    cin>>m;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(i==1||i==n||j==1||j==m){
            cout<<"*";
        }
        else cout<<" ";
    }
    cout<<"\n";
   }
}