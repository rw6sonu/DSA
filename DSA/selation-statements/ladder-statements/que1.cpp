#include<iostream>
using namespace std;
int main()
{
    // Write a program to classify a number as positive, negative, or zero 

    float num;
    cout<<"enter the num:-";
    cin>>num;
    

    if(num>0){
        cout<<"the num is positive"<<endl;
    }
    else if(num<0){
          cout<<"the num is negative"<<endl;
    }
    else{
            cout<<"the num is zero"<<endl;
    }
}