#include<iostream>
using namespace std;
int main()
{
    // Write a program to check whether a person passed or failed (passing marks = 40)

    int marks;
    cout<<"enter the marks:-";
    cin>>marks;
    

    if(marks>=40){
        cout<<"you are passed"<<endl;
    }
    else{
          cout<<"you are failed"<<endl;
    }
}