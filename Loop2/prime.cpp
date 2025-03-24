#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  number=";
    cin>>n;
    bool flag=true;//number is prime
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=false;
            cout<<n<<" is composite number \n";
            break;
        }
    }
    if(n==1) cout<<"Neither prime not composite";
    if(flag==true) cout<<n<<" is prime number";
    else cout<<n<<" is a composite number";
}                                                                        