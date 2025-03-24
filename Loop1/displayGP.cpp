//Display this GP-1,2,4,8,16,32... upto 'n' terms
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms=";
    cin>>n;
    cout<<"the series is\n";
    for(int i=1;i<=pow(2,n-1);i*=2){
            cout<<i<<"\n";
        }
}