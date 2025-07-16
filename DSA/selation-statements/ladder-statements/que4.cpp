#include<iostream>
using namespace std;
int main()
{
    //Write a program to categorize age

    int age;
    cout<<"enter the age:-";
    cin>>age;
    

    if(age<0){
        cout<<"Invalid Age"<<endl;
    }
    else if(age<13){
          cout<<"catagory:child"<<endl;
    }
    else if(age<=19){
            cout<<"catagory:Teen"<<endl;
    }
    else if(age<=59){
          cout<<"catagory:Adult"<<endl;
    }
    else{
        cout<<"catagory:Senior"<<endl;
    }
}