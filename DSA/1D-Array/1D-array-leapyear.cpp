// Create a 1D array of all Leap years from a given range.
#include <iostream>
using namespace std;

int main()
{
    int startYear, endYear, i, arr[20], j,k;

    cout << "Enter the start year: ";
    cin >> startYear;

    cout << "Enter the end year: ";
    cin >> endYear;

    for (i = startYear; i <= endYear; i++)
    {

        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            arr[j] = i;
            j++;
        }
         }
      
            cout << "Leap years between " << startYear << " and " << endYear << " are:"<<endl;
            for (int i = 0; i < j; i++)
            {
                cout << arr[i] << " ";
            }
        
   
    
}
