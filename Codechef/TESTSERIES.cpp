#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, arr[5];
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == 1)
                a++;
            else if (arr[i] == 2)
                b++;
        }

        if (a == b)
            cout << "DRAW" << endl;
        else if (a > b)
            cout << "INDIA" << endl;
        else if (b > a)
            cout << "ENGLAND" << endl;
    }

    return 0;
}