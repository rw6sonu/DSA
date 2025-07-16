#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l;

    for (i = 5; i >= 1; i--)
    {
        for (k = 1; k <= i; k++)
        {
            cout << "  ";
        }
        for (j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        for (l = 4; l >= i; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}