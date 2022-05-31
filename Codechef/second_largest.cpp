#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case, num1, num2, num3;
    cin >> test_case;
    while (test_case--)
    {
        cin >> num1 >> num2 >> num3;
        if (num1 > num2)
        {
            if (num1 > num3)
            {
                if (num2 > num3)
                {
                    cout << num2 << endl;
                }
                else
                    cout << num3 << endl;
            }
            else
                cout << num1 << endl;
        }
        else
        {
            if (num2 > num3)
            {
                if (num1 > num3)
                {
                    cout << num1 << endl;
                }
                else
                    cout << num3 << endl;
            }
            else
                cout << num2 << endl;
        }
    }
    return 0;
}