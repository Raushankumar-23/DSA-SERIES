//3.  Display this AP - 4,7,10,13,16.. upto ‘n’ terms 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms=";
    cin>>n;
    cout<<"the series is\n";
    for(int i=4;i<=(3*n-1);i+=3){
            cout<<i<<"\n";
        }
}
