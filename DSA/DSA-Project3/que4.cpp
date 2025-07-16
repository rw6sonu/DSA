#include<iostream>
using namespace std;
int main()
{
    int i,j,k;

    for(i=5;i>=1;i--)
    {
        for(k=i;k<=5-1;k++)
        {
            cout<< "  ";
        }
        for(j=5;j>=6-i;j--)
        {
            if(j%2==0)
            {
                cout<<" 0";
            }
            else
            {
                cout<<" 1";
            }
        }
        cout<<endl;
    }
}