#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {
        int max1 = 0, max2 = 0, max3 = 0, max4 = 0, max5 = 0, max6 = 0, max7 = 0, max8 = 0;
        cin >> n;
        int pi[n], si[n], result[n];

        for (int i = 0; i < n; i++)
        {
            cin >> pi[i] >> si[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (pi[i] == 1)
            {

                if (si[i] > max1)
                    max1 = si[i];
            }
            else if (pi[i] == 2)
            {

                if (si[i] > max2)
                    max2 = si[i];
            }
            else if (pi[i] == 3)
            {

                if (si[i] > max3)
                    max3 = si[i];
            }
            else if (pi[i] == 4)
            {

                if (si[i] > max4)
                    max4 = si[i];
            }
            else if (pi[i] == 5)
            {

                if (si[i] > max5)
                    max5 = si[i];
            }
            else if (pi[i] == 6)
            {

                if (si[i] > max6)
                    max6 = si[i];
            }
            else if (pi[i] == 7)
            {

                if (si[i] > max7)
                    max7 = si[i];
            }
            else if (pi[i] == 8)
            {

                if (si[i] > max8)
                    max8 = si[i];
            }
        }

        cout << max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8 << endl;
    }
    return 0;
}
