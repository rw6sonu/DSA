// Print Diadonal Elements
#include<iostream>
using namespace std;
int main(){
    
    int i, j, row, col;

    cout << "enter the row of array:- ";
    cin >> row;
    cout << "enter the col of array:- ";
    cin >> col;
    int arr[row][col];


    cout << "enter the row of array:- ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "enter the col of array:- "<<endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
          
           
            if (i==j)
            {
                cout << arr[i][j]<<" ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

}