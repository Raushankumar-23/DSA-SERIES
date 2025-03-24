//Display this AP-1,3,5,7,8.....upto 'n' terms
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms=";
    cin>>n;
    cout<<"the series is\n";
    for(int i=1;i<=(2*n-1);i=i+2){
            cout<<i<<"\n";
        }
}