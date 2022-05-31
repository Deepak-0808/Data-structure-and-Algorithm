// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s, w;
//     int n, ssize;
//     getline(cin, s);
//     ssize = s.size();
//     cin >> n;
//     while (n--)
//     {
//         cin >> w;
//         int count=0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             for (int j = 0; j <s.size(); j++)
//             {
//                 if (s[i] == w[j])
//                 {
//                     count++;
//                     break;
//                 }
//             }
//         }
//         if (ssize == count)
//             cout << "Yes" << endl;
//         else
//             cout << "No" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, w;
    int n, ssize;
    getline(cin, s);
    ssize = s.size();
    cin >> n;
    while (n--)
    {
        cin >> w;
        int count=0;
        for (int i = 0; i < w.size(); i++)
        {
            for (int j = 0; j <s.size(); j++)
            {
                if (w[i] == s[j])
                {
                    count++;
                    break;
                }
            }
        }
        if (w.size() == count)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}