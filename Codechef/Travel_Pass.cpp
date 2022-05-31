#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, N, A, B, count1, count2;
    cin >> t;

    while (t--)
    {
        count1 = 0, count2 = 0;
        cin >> N >> A >> B;
        string S;
        cin >> S;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '0')
                count1++;
            else
                count2++;
        }

        cout << (A * count1) + (B * count2) << endl;
    }
    return 0;
}
