#include<iostream>
using namespace std;
int main()
{
    //Write a program to check whether a character is a vowel or consonant 

    char ch;
    cout<<"enter the ch:-";
    cin>>ch;
    

    if(ch=='a'|| ch=='e' ||ch=='i'|| ch=='o'|| ch=='u'){
        cout<<"charactor is vowel"<<endl;
    }
    else{
          cout<<"charactor is consonant "<<endl;
    }
}