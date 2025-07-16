#include<iostream>
using namespace std;

int main()
{
    //  int a = 5; double b = 2; cout << a / b; Convert float f = 7.89; to an integer and store it in an int variable.
    int a=5 , b=2;
    float f=7.89; 
    
    int result=a / b;
    int result2 = (int)f; 
    
    cout<<"result is:-" <<result <<endl <<result2 <<endl;
}