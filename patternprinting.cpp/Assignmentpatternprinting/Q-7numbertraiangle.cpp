//Print the following pattern
//Sample Input: n= 4
//Output:
//1
//12
//123
//1234
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}