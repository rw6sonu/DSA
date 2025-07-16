#include<iostream>
using namespace std;
int main()
{
    // . Write a condition using logical operators to check if a number is between 100 and 200 inclusive.

    int num;
    cout<<"enter the num :- ";
    cin>>num;
   
    if(num>100 && num<200)
    {
        cout<<"num is between 100 and 200";
    }
    else{
        cout<<"invalid num plzz enter the num between 100 and 200";
    }
    return 0;
}