//print the sum of the series : 1,-2,3,-4  upto 'n' terms
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  number=";
    cin>>n;
    int oddsum=0;
    int evensum=0;
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            oddsum=oddsum+i;
        }
        else{
            evensum=evensum+i;
        }
    }
    int diff=oddsum-evensum;
    cout<<"sum of the series="<<diff;
}