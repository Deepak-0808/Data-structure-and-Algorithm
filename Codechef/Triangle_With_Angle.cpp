#include <bits/stdc++.h>
using namespace std;

int main()
{
    int angel1, angel2, angel3, sum_of_angel;

    cin >> angel1 >> angel2 >> angel3;
    if (angel1 > 0 && angel2 > 0 && angel3 > 0)
    {
        sum_of_angel = angel1 + angel2 + angel3;
        if (sum_of_angel == 180)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}