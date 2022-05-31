#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y)
{

    if (x % 2 == 0)
    {
        if (x == 0)
        {
            if (y % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    long long int x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        solve(x, y);
    }
    return 0;
}
