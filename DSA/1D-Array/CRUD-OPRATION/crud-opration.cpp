// CRUD OPERATION
#include <iostream>
using namespace std;

int main()
{
    int i, element, size, position, choice, count = 0;

    cout << "enter the size of array:- ";
    cin >> size;

    int arr[size];
    do
    {

        cout << " 1 element inserted in array" << endl;
        cout << " 2 element deleted from array" << endl;
        cout << " 3 element updated in array" << endl;
        cout << " 4 element view in array" << endl;
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

                else
                {
                    for (i = position; i < count; i++)
                    {
                        arr[i + 1] = arr[i];
                    }
                    arr[position] = element;
                    count++;
                    cout << "Element Inserted Successfully" << endl;
                }
            }
            break;

        case 2:

            cout << "enter the element:- ";
            cin >> element;

            cout << "enter the Position:-";
            cin >> position;

            arr[position] = element;
            cout << "Element updated Successfully" << endl;
            for (i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }

            break;

        case 3:
            cout << "enter the Position:-";
            cin >> position;
          
            for (i = position-1; i < size; i++)
            {
                arr[i] = arr[i+1];
            }
            count--;
            cout << "Element Deleted Successfully" << endl;
            break;

        case 4:
            cout << "your array is:- ";
            for (i = 0; i < count; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }

    } while (choice != 0);
}