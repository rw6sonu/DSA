#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, element, size, position, choice, count = 0;

    cout << "enter the size of Student detail";
    cin >> size;

    int arr[size];
    do
    {

        cout << " 1 Student detail inserted in array" << endl;
        cout << " 2 Student detail deleted from array" << endl;
        cout << " 3 Student detail updated in array" << endl;
        cout << " 4 Student detail view in array" << endl;
        cout << " 5 size of array" << endl;
        cout << " 0 exit" << endl;

        cout << "enter your Choice:- ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count >= size)
            {
                cout << " Array is Full";
            }
            else
            {
                cout << "enter the element:- ";
                cin >> element;
                cout << "enter the Position:-";
                cin >> position;

                if (position < 0 || position > count)
                {
                    cout << "Invalid Position";
                }
                else{
                    for (i = position; i < count; i++)
                    {
                        arr[i + 1] = arr[i];
                    }
                    arr[position] = element;
                    count++;
                    cout << "Student detail inserted in array" << endl;
                }
            }
        }

    } while (choice != 0);
}