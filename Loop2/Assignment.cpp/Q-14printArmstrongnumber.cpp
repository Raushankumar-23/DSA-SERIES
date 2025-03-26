//14. Print all the Armstrong numbers in a given range.Range will be provided by the user 
//Armstrong number is a number that is equal to the sum of cubes of its digits. For example 
//0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
#include<iostream>
using namespace std;
int main(){
    int n,r,sum;
    cout<<"Enter the number : ";
    cin>>n;
    int p=1;
    while(p<=n){
        sum=0;
       for(int j=p;j>0;j=j/10){
        r=j%10;
        sum=sum+(r*r*r);
       }
        if(sum==p){
            cout<<p<<"\n";
        }
        p++;
    }
    return 0;
}