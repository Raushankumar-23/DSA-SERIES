//4. Display this GP - 3,12,48,.. upto ‘n’ terms 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms=";
    cin>>n;
    cout<<"the series is\n";
    for(int i=3;i<=3*pow(4,n-1);i*=4){
            cout<<i<<"\n";
        }
}