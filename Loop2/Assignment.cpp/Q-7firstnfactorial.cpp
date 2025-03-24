//7. Print the factorials of first ‘n’ numbers Sample
//Input: 10
//Output:
//1
//2
//6
//24
//120
//720
//5040
//40320
//362880
//3628800
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  number=";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        cout<<"factorial of "<<i<<" is "<<fact<<"\n";

    }
    //cout<<"factorial of "<<n<<" is "<<fact<<"\n";
}