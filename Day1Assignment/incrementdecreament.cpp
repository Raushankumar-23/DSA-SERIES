//Explain the difference between x++ and ++x in your own words
//take an integer as input and
//print its value using post-increment(x++)
//print its value again using pre-incremeent(++x)
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x=";
    cin>>x;
    cout<<x++;
    cout<<" "<<++x;

}