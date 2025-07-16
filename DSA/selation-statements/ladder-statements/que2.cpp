#include<iostream>
using namespace std;
int main()
{
    // Write a program to assign grades based on marks 

    int marks;
    cout<<"enter the marks:-";
    cin>>marks;
    

    if(marks>=90){
        cout<<"the grade is A+"<<endl;
    }
    else if(marks>=80){
          cout<<"the grade is A"<<endl;
    }
    else if(marks>=70){
            cout<<"the grade is B"<<endl;
    }
    else if(marks>=60){
          cout<<"the grade is C"<<endl;
    }
    else{
        cout<<"the grade is F"<<endl;
    }
}