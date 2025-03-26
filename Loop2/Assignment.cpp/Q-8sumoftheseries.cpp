//8. Find the sum of the series upto n terms.
//Write a program to calculate the sum of series up to n term. For example, if n =5
//the series will become 2 + 22 + 222 + 2222 + 22222 = 24690. Take the user input
//and then calculate. And the output style should match which is given in the
//Example. Input: 5
//Output: Sum of above series is: 24690
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  number of term=";
    cin>>n;
    int next=0;
    int sum=0;
        for(int i=1;i<=n;i++){
            next=next*10+2;
            //cout<<next<<"\n";
            sum=sum+next;
        }
  cout<<sum;
}