#include <iostream>
using namespace std;
int main(){
    //  Write a program to simulate a traffic light 

   int signal;
    
    cout << "enter the signal:-";
    cin >> signal;

    if (signal == 1)
    {
        cout << " Red Light :- stop"<<endl;
    }
    else if (signal == 2)
    {
        
        cout << "Yellow Light :- Get Ready"<< endl;
    }

    else if (signal == 3)
    {
        
        cout << "Green Light :- Go "  << endl;
    }
    else
    {
        cout << "invalid input" << endl;
    }
}