#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, num, temp, rev;
    cin >> t;
    while (t--)
    {
        temp = 0;
        rev = 0;
        cin >> num;
        int c;
        c = num;
        while (num > 0)
        {
            temp = num % 10;
            rev = (rev * 10) + temp;
            num = num / 10;
        }

        if (c == rev)
        {
            cout << "wins" << endl;
        }
        else
            cout << "loses" << endl;
    }
    return 0;
}