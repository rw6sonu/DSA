// Find Average of all element of 2d array
#include <iostream>
using namespace std;

int main()
{

    int size, sum = 0, j, i, row, col;
    float avg;

    cout << "Enter the row of array: ";
    cin >> row;

    cout << "Enter the col of array: ";
    cin >> col;

    cout << "Enter element : ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            int arr[i][j];

            cin >> arr[i][j];
            sum = sum + arr[i][j];
        }
    }
    avg = (float)sum / (row * col);
    cout << "Sum of Array is:- " << sum << endl;
    cout << "avg of Array is:- " << avg << endl;
    return 0;
}