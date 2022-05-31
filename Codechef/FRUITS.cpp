#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, diff = 0;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if (n == m && k == 0)
        {
            cout << "0" << endl;
            return 0;
        }
        while (k--)
        {
            if (n < m)
                n++;
            else
                m++;
        }
        diff = n - m;
        if (n - m < 0)
        {
            diff = diff * -1;
        }
        cout << diff << endl;
    }
    return 0;
}