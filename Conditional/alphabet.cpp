//write a program to check whether a character is an alphabet or not.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the char ";
    cin>>ch;
    int ascii=(int)ch;
    if((ascii>64&&ascii<91)||(ascii>96&&ascii<123)){
        
        cout<<"Its a alphabet ";
    }
    else{
        cout<<"Its not a alphabet";
    }
}