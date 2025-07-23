/*Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
is pressed.*/

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Error : division by zero is not allowed ." << endl;
       return -1;
    }
}
int mod(int a, int b)
{
    if (b != 0 && a >= b)
    {
        return a % b;
    }
    else
    {
        cout << "Error : modulus by zero is not allowed." << endl;
        return -1;
    }
}
int main()
{

    int num1, num2, choice;

    while (1)
    {

        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 to exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0)
        {
            cout << "Exiting the program." << endl;
            break;
        }

        if (choice == 5)
        {
            cout << "Enter the first integer for modulus: ";
            cin >> num1;
            cout << "Enter the second integer for modulus: ";
            cin >> num2;
        }
        else
        {
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
        }

        // Switch-case for performing the chosen operation

        switch (choice)
        {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result:" << sub(num1, num2) << endl;
            break;
        case 3:
            cout << "Result:" << mul(num1, num2) << endl;
            break;
        case 4:
            if (division(num1, num2) != -1)
            {
                cout << "Result:" << division(num1, num2) << endl;
            }
            break;
        case 5:
            cout << "result:" << mod(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice! Please select a valid operation." << endl;
        }
    }
    // OUTPUT

    /*Press 1 for +
    Press 2 for -
    Press 3 for *
    Press 4 for /
    Press 5 for %
    Press 0 to exit
    Enter your choice: 1
    Enter the first number: 5
    Enter the second number: 2
    Result: 7

    Press 1 for +
    Press 2 for -
    Press 3 for *
    Press 4 for /
    Press 5 for %
    Press 0 to exit
    Enter your choice: 2
    Enter the first number: 15
    Enter the second number: 3
    Result:12

    Press 1 for +
    Press 2 for -
    Press 3 for *
    Press 4 for /
    Press 5 for %
    Press 0 to exit
    Enter your choice: 3
    Enter the first number: 5
    Enter the second number: 2
    Result:10

    Press 1 for +
    Press 2 for -
    Press 3 for *
    Press 4 for /
    Press 5 for %
    Press 0 to exit
    Enter your choice: 4
    Enter the first number: 8
    Enter the second number: 2
    Result:4

    Press 1 for +
    Press 2 for -
    Press 3 for *
    Press 4 for /
    Press 5 for %
    Press 0 to exit
    Enter your choice: 5
    Enter the first integer for modulus: 15
    Enter the second integer for modulus: 3
    result:0

    Press 1 for +
    Press 2 for -
    Press 3 for *
    Press 4 for /
    Press 5 for %
    Press 0 to exit
    Enter your choice: 0
    Exiting the program.*/
}