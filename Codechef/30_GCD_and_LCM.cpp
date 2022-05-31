#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, A, B, Snum;
    cin >> t;
    while (t--)
    {
        
        cin >> A >> B;
        Snum = A < B ? A : B;

        for (Snum; Snum >= 1; Snum--)
        {
            if (A % Snum == 0 && B % Snum == 0)
            {
                cout << Snum << " ";
                break;
            }
        }

        // for (int x = 2; x <= A * B; x++)
        // {

        //     if (x % A == 0 && x % B == 0)
        //     {

        //         cout << x << endl;
        //         break;
        //     }
        // }
        cout<<(A*B)/Snum<<endl;
    }

    return 0;
}



