// develop a program that takes a score out of 100 as input from the user and calculate the corresponding grade using a ternary oprator. allocate grades from A to F for various ranges.

#include <iostream>
using namespace std;
int main()
{

    int marks;
    char grade;

    cout << "enter the marks:- ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "invalid marks please enter the marks between 0 and 100";
        return 1;
    }
    grade = (marks >= 90)   ? 'A'
            : (marks >= 80) ? 'B'
            : (marks >= 70) ? 'C'
            : (marks >= 60) ? 'D'
            : (marks >= 50) ? 'E'
                            : 'F';

    switch (grade)
    {
    case 'A':
        cout << "Your Grade is A. Excellent work!";
        break;
    case 'B':
        cout << "Your Grade is B. Well Done";
        break;
    case 'C':
        cout << "Your Grade is C. Good Job";
        break;
    case 'D':
        cout << "Your Grade is D. You Passed";
        break;
    case 'E':
        cout << "Your Grade is E. You Passed, but you could do better";
        break;
    case 'F':
        cout << "Sorry,you failed";
        break;
    }

    if(grade=='A' || grade=='B' || grade=='C' || grade=='D' || grade=='E'){
        cout<<""" Congratulations!You are eligible for the next level";
    }
    else{
        cout<<""" Please try again next time";
    }
    return 0;
}