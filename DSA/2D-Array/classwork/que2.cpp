// addition of two 2D array and store into another array.

#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10], size, i, j, row, col;

    cout << "enter the row of array:- ";
    cin >> row;
    cout << "enter the col of array:- ";
    cin >> col;
    cout << "Enter element of A:- ";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int arr[i][j];
            cin >> a[i][j];
        }
    }
    cout << "Enter element of B:-" ;
    for (int i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            cin >> b[i][j];
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << "Addition of two array is:- " << c[i][j] << endl;
    }
}