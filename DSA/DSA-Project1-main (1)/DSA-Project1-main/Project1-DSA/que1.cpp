// develop a program that takes a score out of 100 as input from the user and calculate the corresponding grade using a ternary oprator. allocate grades from A to F for various ranges.

#include <iostream>
using namespace std;
int main()
{

    int marks;
    char grade;

    cout << "enter the marks:- ";
    cin >> marks;

  if( marks<0 || marks>100)
    {
        cout<<"invalid marks please enter the marks between 0 and 100";
        
    }
    grade = (marks >= 90)? 'A' 
         : (marks >= 80) ? 'B'
         : (marks >= 70) ? 'C'
         : (marks >= 60) ? 'D'
         : (marks >= 50) ? 'E'
        :'F';  
        
    cout<<"Your Grade is:- "<<grade<<endl;
  
    return  0;
}