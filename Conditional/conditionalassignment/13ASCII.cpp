#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a letter is small case : ";
    cin>>ch;
    // char cap_ch=char((int)ch-32);
    // cout<<"capital letter is :"<<cap_ch;
    int ch1=(int)ch;
    if(ch1>=97&&ch1<=122){
        ch1=ch1-32;
        char ch2=(int)ch1;
        cout<<"capital letter is :"<<ch2;
    }
}
