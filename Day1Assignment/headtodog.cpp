//write a program that will tell the number of dogs and chicken are there when the user will provide the value of total heads and legs
//for examples
//input:heads->4legs->12
//output:dogs->2chicken->2
#include<iostream>
using namespace std;
int main(){
    int head,legs,dogs,chicken;
    cout<<"Enter the number of hed ";
    cin>>head;
    cout<<"Enter the number of legs ";
    cin>>legs;
    chicken=(4*head-legs)/2;
    dogs=4-chicken;
    cout<<"dogs->"<<dogs;
    cout<<"chicken->"<<chicken;
}

