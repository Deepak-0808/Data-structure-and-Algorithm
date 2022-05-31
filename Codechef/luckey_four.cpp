
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    int sum;
    cin >> test_case;
    while (test_case--)
    {
        sum = 0;
        int num1;
        cin >> num1;
        while (num1 > 0)
        {
            int reminder;
            reminder = num1 % 10;
            num1 = num1 / 10;
            if (reminder == 4)
            {
                sum++;
            }
        }
        cout << sum;
    }
    return 0;
}