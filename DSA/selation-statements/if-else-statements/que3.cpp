#include<iostream>
using namespace std;
int main()
{
    // Write a program to check whether a number is divisible by both 3 and 5

    int num;
    cout<<"enter the num:-";
    cin>>num;
    

    if(num%3==0 && num%5==0){
        cout<<"the num is  divisible by both 3 and 5"<<endl;
    }
    else{
          cout<<"the num is not divisible by both 3 and 5"<<endl;
    }
}