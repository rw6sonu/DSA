// Print row-wise & col-wise sum of Elements
#include <iostream>
using namespace std;
int main()
{

    int i, j, row, col;

    cout << "enter the row of array:- ";
    cin >> row;
    cout << "enter the col of array:- ";
    cin >> col;
    int arr[row][col];

    cout << "enter the element of array:- ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int choice;

    cout << "choose an option" << endl;
    cout << "1.row-wise sum" << endl;
    cout << "2.col-wise sum" << endl;
    cout << "enter your choice";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "row-wise sum" << endl;
        for (i = 0; i < row; i++)
        {
            int  rowSum = 0;
            for (j = 0; j < col; j++)
            {
                rowSum += arr[i][j];
            }
            cout << "sum of row " << i + 1 << " is :-" << rowSum << endl;
        }
        break;

    case 2:
        cout << "col-wise sum" << endl;

        for (j = 0; j < col; j++)
        {
            int  colSum = 0;
            for (i = 0; i < row; i++)
            {
                colSum += arr[i][j];
            }
            cout << "sum of col " << j + 1 << " is :-" << colSum << endl;
        }

        break;
    default:
        cout << "invalid choice please select 1 or 2." << endl;
    }
}