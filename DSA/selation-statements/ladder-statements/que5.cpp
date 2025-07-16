#include <iostream>
using namespace std;
int main()
{
    // Write a menu-driven program using numbers:
    int choice;
    
    cout << "enter the choice:-";
    cin >> choice;

    float num1, num2;
    cout << "enter the both num:-";
    cin >> num1 >> num2;

    int Add, substract, multiply;
    float divide;

    if (choice == 1)
    {
        Add = num1 + num2;
        cout << "addition is:-" << Add << endl;
    }
    else if (choice == 2)
    {
        substract = num1 - num2;
        cout << "substraction is:-" << substract << endl;
    }

    else if (choice == 3)
    {
        multiply = num1 * num2;
        cout << "multiplication is:- " << multiply << endl;
    }
    else if (choice == 4)
    {
        divide = num1 / num2;
        cout << "divition is:-" << divide << endl;
    }
    else
    {
        cout << "invalid input plzz enter the num between 1 to 4" << endl;
    }
}