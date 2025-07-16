// Q1

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, j;
    cout << "Question1" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q2
    cout << "Question2" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q3
    cout << "Question3" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            cout << "  ";
        }
        for (j = i; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q4
    cout << "Question4" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q5
    cout << "Question5" << endl;
    cout << endl;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q6
    cout << "Question6" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q7
    cout << "Question7" << endl;
    cout << endl;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q8
    cout << "Question8" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q9
    cout << "Question9" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q10
    cout << "Question10" << endl;
    cout << endl;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q11
    cout << "Question11" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q12
    cout << "Question12" << endl;
    cout << endl;
    int n = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q13
    cout << "Question13" << endl;
    cout << endl;
    int num;

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            if (j % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q14
    cout << "Question14" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {

            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q15
    cout << "Question15" << endl;
    cout << endl;

    for (i = 0; i < 5; i++)
    {
        for (int k = 0; k <= 5 - i; k++)
        {
            cout << " ";
        }
        int num = 1;
        for (j = 0; j <= i; j++)
        {

            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q16
    cout << "Question16" << endl;
    cout << endl;
    int numb = 1;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 0; k < 5 - i; k++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || i == 2 || i == 3 || i == 4)
            {
                cout << "  ";
            }
            else if (i == 5)
            {
                cout << " ";
            }
            cout << numb << " ";
            numb++;
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q17
    cout << "Question17" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "1 ";
            }
            else if (j == i || i == 5)
            {

                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q18
    cout << "Question18" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q19
    cout << "Question19" << endl;
    cout << endl;
    for (i = 1; i < 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q20
    cout << "Question20" << endl;
    cout << endl;
    for (i = 1; i < 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q21
    cout << "Question21" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "1 ";
            }
            else if (j == i || i == 5)
            {

                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q22
    cout << "Question22" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q23
    cout << "Question23" << endl;
    cout << endl;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || i == 7 || j == 7)
            {
                cout << "4 ";
            }
            else if (j == 2 || i == 2 || i == 6 || j == 6)
            {
                cout << "3 ";
            }
            else if (i == 3 || i == 5 || j == 5 || j == 3)
            {
                cout << "2 ";
            }
            else if (i == 4 || j == 4)
            {
                cout << "1 ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q24
    cout << "Question24" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << "  ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (j = 2; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q26
    cout << "Question26" << endl;
    cout << endl;

    int numbe = 1;

    for (i = 1; i <= 5; i++)
    {
        if (i < 5)
        {
            for (j = 1; j <= i; j++)
            {
                if (j == 1)
                {
                    cout << "1 ";
                }
                else if (j == i)
                {
                    numbe += 2;
                    cout << numbe << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        else
        {

            int temp = 1;
            for (j = 1; j <= 5; j++)
            {
                cout << temp << " ";
                temp += 2;
            }
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q27
    cout << "Question27" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i == 1 || j == 1 || i == 4 || j == 4)
            {
                cout << "1 ";
            }
            else if (j == 2 || i == 2 || i == 3)
            {
                cout << "2 ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q28
    cout << "Question28" << endl;
    cout << endl;
    int tm = 1;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << tm << " ";
            tm++;
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q29
    cout << "Question29" << endl;
    cout << endl;
    int number1 = 1;
    for (i = 1; i <= 4; i++)
    {
        for (int k = 4; k > i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << number1 << " ";
            number1++;
        }
        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        number1 = i * (i - 1) / 2 + 1;
        for (int k = 1; k <= 4 - i; k++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << number1 << " ";
            number1++;
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q30
    cout << "Question30" << endl;
    cout << endl;

    for (i = 1; i < 5; i++)
    {
        for (int k = 1; k < 5 - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        for (int k = 1; k < 5 - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q31
    cout << "Question31" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* " << "";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q32
    cout << "Question32" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*" << "";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q33
    cout << "Question33" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q34
    cout << "Question34" << endl;
    cout << endl;

    for (int i = 1; i <= 3; i++)
    {

        for (int k = 3 - i; k > 0; k--)
        {
            cout << " ";
        }
        int stars;
        string gap;
        if (i == 1)
        {
            stars = 3;
            gap = "   ";
        }
        else if (i == 2)
        {
            stars = 6;
            gap = " ";
        }
        else
        {
            stars = 4;
            gap = "   ";
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
            if (j < stars)
            {
                cout << gap;
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q35
    cout << "Question35" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    for (i = 4; i >= 1; i--)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q36
    cout << "Question36" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            cout << "";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q37
    cout << "Question37" << endl;
    cout << endl;

    for (i = 3; i >= 1; i--)
    {
        for (int k = 1; k < 4 - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (i = 2; i < 4; i++)
    {
        for (int k = 1; k < 4 - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q38
    cout << "Question38" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (int k = 4; k > i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {

        for (int k = 1; k <= 4 - i; k++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q39
    cout << "Question39" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 5)
            {
                cout << "*";
            }
            else if (j == 5)
            {
                cout << "   * ";
            }
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q40
    cout << "Question40" << endl;
    cout << endl;

    char l, m;

    for (l = 'A'; l <= 'E'; l++)
    {
        for (m = 'A'; m <= l; m++)
        {
            cout << m << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q41
    cout << "Question41" << endl;
    cout << endl;

    for (l = 'E'; l >= 'A'; l--)
    {
        for (m = l; m >= 'A'; m--)
        {
            cout << m << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q42
    cout << "Question42" << endl;
    cout << endl;
    char temmp = 'A';
    for (l = 'A'; l <= 'E'; l++)
    {
        for (m = 'A'; m <= l; m++)
        {
            cout << temmp << " ";
            temmp++;
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q43
    cout << "Question43" << endl;
    cout << endl;

    for (l = 'A'; l <= 'D'; l++)
    {
        // for (char p = 'D'; p > l; p--)
        // {
        //     cout << " ";
        // }
        for (m = 'A'; m <= l; m++)
        {
            cout << m << " ";
        }
        cout << endl;
    }
    for (l = 'C'; l >= 'A'; l--)
    {
        // number2 = l * (l - 'A') / 'B' + 'A';
        for (char p = 'A'; p <= 'D' - l; p++)
        {
            cout << " ";
        }

        for (m = 'A'; m <= l; m++)
        {
            cout << m << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q44
    cout << "Question44" << endl;
    cout << endl;

    for (l = 'A'; l <= 'D'; l++)
    {
        for (char p = 'D'; p >= l; p--)
        {
            cout << " ";
        }
        for (m = 'A'; m <= l; m++)
        {
            cout << m << " ";
        }
        cout << endl;
    }
    for (l = 'C'; l >= 'A'; l--)
    {
        for (char p = 'D'; p >= l; p--)
        {
            cout << " ";
        }
        for (m = 'A'; m <= l; m++)
        {
            cout << m << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q45
    cout << "Question45" << endl;
    cout << endl;

    for (l = 'A'; l <= 'D'; l++)
    {
        for (char p = 'D'; p > l; p--)
        {
            cout << "  ";
        }
        for (m = 'A'; m <= l; m++)
        {

            cout << m << " ";
        }
        for (char o = l - 1; o >= 'A'; o--)
        {
            cout << o << " ";
        }

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q46
    cout << "Question46" << endl;
    cout << endl;

    for (l = 'A'; l <= 'E'; l++)
    {
        for (m = 'A'; m <= l; m++)
        {
            cout << "A" << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q47
    cout << "Question47" << endl;
    cout << endl;

    for (l = 'E'; l >= 'A'; l--)
    {
        for (m = 'E'; m >= l; m--)
        {
            cout << l << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q48
    cout << "Question48" << endl;
    cout << endl;

    for (l = 'E'; l >= 'A'; l--)
    {
        for (m = 'E'; m >= l; m--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q49
    cout << "Question49" << endl;
    cout << endl;
    for (i = 0; i < 5; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        int stars = 9 - (i * 2);
        for (j = 0; j < stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q50
    cout << "Question50" << endl;
    cout << endl;

    for (l = 'A'; l <= 'E'; l++)
    {
        // for (char p = 'D'; p > l; p--)
        // {
        //     cout << " ";
        // }
        for (m = 'A'; m <= l; m++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (l = 'D'; l >= 'A'; l--)
    {
        // number2 = l * (l - 'A') / 'B' + 'A';
        for (char p = 'A'; p <= 'E' - l; p++)
        {
            cout << " ";
        }

        for (m = 'A'; m <= l; m++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q51
    cout << "Question51" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "*";

        for (j = 1; j <= (2 * (4 - i)); j++)
            cout << " ";

        for (j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {

        for (j = 1; j <= i; j++)
            cout << "*";

        for (j = 1; j <= 2 * (3 - i) + 2; j++)
            cout << " ";

        for (j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q52
    cout << "Question52" << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {

        for (j = 1; j <= 5; j++)
        {
            if (i == 3 || j == 3)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q53
    cout << "Question53" << endl;
    cout << endl;

    int even;

    for (i = 1; i <= 5; i++)
    {
        int even = 2;
        for (j = 1; j <= i; j++)
        {
            cout << even << " ";
            even += 2;
        }
        cout << endl;
    }

    // cout << "-----------------------------------------" << endl;
    // cout << endl;
    // // Q54
    // cout << "Question54" << endl;
    // cout << endl;

    // for (int i = 1; i <= 3; i++) {
    //     for (int k = 2; k >= i; k--){
    //         cout << " ";

    //     }

    //     for (int j = 1; j <= 2 * i; j++){

    //         cout << "*";
    //     }
    //     cout << "";

    //     for (int j = 1; j <= 2 * i; j++){

    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // for (int i = 4; i >= 1; i--) {
    //     for (int k = 1; k >= i; k--)
    //         cout << " ";

    //     for (int j = 1; j <= (2 * i - 1); j++)
    //         cout << "*";

    //     cout << endl;
    // }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q55
    cout << "Question55" << endl;
    cout << endl;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i == j)
            {
                cout << i << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q56
    cout << "Question56" << endl;
    cout << endl;
    int nu = 0;

    for (i = 1; i <= 4; i++)
    {
        int count;
        count = 0;

        while (count < i)
        {
            if (nu == 0 || nu % 2 != 0)
            {
                cout << nu << " ";
                count++;
            }
            nu++;
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q57
    cout << "Question57" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || i == 3 || i == 5)
            {
                cout << "@ " << " ";
            }
            else
            {
                cout << "# " << " ";
            }
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q58
    cout << "Question58" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == 3 || j == 5)
            {
                cout << "+ " << " ";
            }
            else
            {
                cout << "- " << " ";
            }
        }
        cout << endl;
    }

    cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q59
    cout << "Question59" << endl;
    cout << endl;


    for (i = 0; i < 4; i++)
    {
        int value = pow (11, 3 - i);
        for (j = 0; j < 4 - i; j++)
        {
            cout << value << " ";
        }
        cout << endl;
    }


     cout << "-----------------------------------------" << endl;
    cout << endl;
    // Q60
    cout << "Question60" << endl;
    cout << endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                cout << "RW1" << " ";
            }
            else if(i==2)
            {
                cout << "RW2" << " ";
            }
            else if(i==3)
            {
                cout << "RW3" << " ";
            }
            else if(i==4)
            {
                cout << "RW4" << " ";
            }
            else if(i==5)
            {
                cout << "RW5" << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
