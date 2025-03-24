//write a menu-driven program
//a) Cm to ft
//b)Km to miles
//USD to INR
#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"welcome to convetor\n\n";
    cout<<"Enter your choice : \n1.cm to ft\n2.km to miles\n3.USD to INR\n4.exist\n";
    cin>>choice;

    switch(choice){
        case 1:
        float ft,cm;
        cout<<"Enter length in cm :  ";
        cin>>cm;
         ft=cm/30.48;
        cout<<"feet="<<ft;
        break;
        case 2:
        float km,miles;
        cout<<"Enter length in km :  ";
        cin>>cm;
        miles=(km/1.609);
        cout<<miles;
        break;
        case 3:
        float USD,INR;
        cout<<"Enter length in USD :  ";
        cin>>USD;
        INR=86.10*USD;
        cout<<"rupees="<<INR;
        break;
    default:
        exit(0);
    }
    //cout<<"thank you";

    
}