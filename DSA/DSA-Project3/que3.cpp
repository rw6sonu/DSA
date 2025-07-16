#include <iostream>
using namespace std;

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (k = i; k <= 4; k++)
        {
            cout << "  ";
        }
        for (j = 6 - i; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}