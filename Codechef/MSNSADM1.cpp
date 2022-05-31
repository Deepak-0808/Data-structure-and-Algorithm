#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr1[n], arr2[n], arr3[n], result = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        for (int i = 0; i < n; i++)
        {
            arr3[i] = ((arr1[i] * 20) - (arr2[i] * 10));

            if (arr3[i] > result)
            {
                result = arr3[i];
            }
        }

        cout << result << endl;
    }
    return 0;
}