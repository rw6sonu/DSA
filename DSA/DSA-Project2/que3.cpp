#include <iostream>
using namespace std;
int main()
{
    // develop a program to find the sum of number's frist and last digits .

    int num, sum = 0, firstDigit, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;

    cout << "Last digit is: " << lastDigit << endl;

    while (num >= 10)
    {
        num = num / 10;
    }

    firstDigit = num;

    cout << "First digit is: " << firstDigit << endl;

    sum = firstDigit + lastDigit;

    cout << "Sum of first and last digit = " << sum << endl;

    return 0;

    /*
    1. Start
    2.Input num
    3.lastDigit = num % 10
    4.While num ≥ 10 → num = num / 10
    5.firstDigit = num
    6.sum = firstDigit + lastDigit
    7.Print sum
    8.End*/

    /*
    output:-
    Enter a number: 855225
    Last digit is: 5
    First digit is: 8
    Sum of first and last digit = 13
    */
}
