//If cost and selling price of an item is input through the keyboard write a program to determine whethere the seller has made profit or incurred loss.also determine how much profit he made or loss he incurred
#include<iostream>
using namespace std;
int main(){
    int cp,sp,profit,loss;
    cout<<"Enter the cost price=";
    cin>>cp;
    cout<<"Enter the selling price=";
    cin>>sp;
    if(sp>cp){
        profit=sp-cp;
        cout<<"profit=" <<profit;
    }
    else{
        loss=cp-sp;
        cout<<"loss="<<loss;
    }
}