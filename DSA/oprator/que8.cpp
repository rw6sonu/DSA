#include <iostream>
using namespace std;
int main()
{
    //  a + b * c - d / e
    int a, b, c, d, e;
    cout << "enter the value of a:- ";
    cin >> a;
    cout << "enter the value of b:- ";
    cin >> b;
    cout << "enter the value of c:- ";
    cin >> c;
    cout << "enter the value of d:- ";
    cin >> d;
    cout << "enter the value of e:- ";
    cin >> e;

    int result= a + b * c - d / e;
    cout<<"result is:- "<<result <<endl;

    return 0;
}