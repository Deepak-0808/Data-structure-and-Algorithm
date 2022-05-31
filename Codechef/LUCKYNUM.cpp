#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, ans = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;

        if (a == 7 || b == 7 || c == 7)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}