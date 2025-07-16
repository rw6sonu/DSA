#include <iostream>
using namespace std;
int main()
{
    // Digit Counter

    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    cout << "Total number of digits: " << count << endl;

    /*
    Step 1: Start
    Step 2: Declare integer variables num and count
    Step 3: Set count = 0
    Step 4: Read a number from the user and store it in num
    Step 5: Check if num is not equal to zero
    → If yes, repeat steps 6–7 until num becomes zero
    → If no, skip to step 8
    Step 6: Divide num by 10 (integer division) and store the result back in num
    Step 7: Increment count by 1
    Step 8: Display the value of count as the total number of digits
    Step 9: End*/

    /*
    output:-
    Enter a number: 525
    Total number of digits: 3
    */
}