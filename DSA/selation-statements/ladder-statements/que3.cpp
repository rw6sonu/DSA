#include<iostream>
using namespace std;
int main()
{
    // Write a program to print the day of the week based on a number (1–7)

    int Day;
    cout<<"enter the Day(1-7):-";
    cin>>Day;
    

    if(Day==1){
        cout<<"Sunday"<<endl;
    }
    else if(Day==2){
          cout<<"monday"<<endl;
    }
    else if(Day==3){
            cout<<"Tuesday"<<endl;
    }
    else if(Day==4){
          cout<<"Wednesday"<<endl;
    }
     else if(Day==5){
        cout<<"Thursday"<<endl;
    }
     else if(Day==6){
        cout<<"Friday"<<endl;
    }
     else if(Day==7){
        cout<<"Saturday"<<endl;
    }
    else{
         cout<<"invalid input plzz enter num between 1 to 7"<<endl;
    }
}