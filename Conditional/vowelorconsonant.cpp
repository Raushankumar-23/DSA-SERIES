//write a program to check whether a given character is a vowel or a consonant
#include<iostream>
using namespace std;
int main(){
    char ch,a,e,i,o,u;
    cout<<"Enter the char ";
    cin>>ch;
    if(ch==a||ch=e||ch==i||ch==o||ch==u){
        cout<<ch<<" is vowels";
    }
    else{
        cout<<ch<<" is consonant";
    }
}