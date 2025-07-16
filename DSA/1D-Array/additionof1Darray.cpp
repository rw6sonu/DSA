// addition of two 1D array and store into another array.

#include <iostream>
using namespace std;

int main()
{
    int a[10], b[10], c[10], arr[20], sum = 0, size,i;

    cout << "enter the size of array:- ";
    cin >> size;
    cout << "Enter element of A: " << endl;
   
    
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element of B:" << endl;
    for (int i = 0; i < size; i++)
    {
       
        cin >> b[i];
        c[i] = a[i] + b[i];
    }
    for (int i = 0; i < size; i++){
        cout << "Addition of two array is:- " <<c[i]<< endl;

    }
    
    
}