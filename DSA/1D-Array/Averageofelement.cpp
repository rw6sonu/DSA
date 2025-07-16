// Find Average of all element of 1d array
#include <iostream>
using namespace std;

int main()
{

    int size, sum = 0, arr[20], i;
    float avg;

    cout << "Enter the size of array: ";
    cin >> size;
    
    cout << "Enter element : ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];

    }
    avg=sum/size;
    cout<<"Sum of Array is:- "<<sum<<endl;
    cout<<"avg of Array is:- "<<avg<<endl;
    return 0;
}