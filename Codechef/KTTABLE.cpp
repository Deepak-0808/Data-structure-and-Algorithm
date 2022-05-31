// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t, n;
//     cin >> t;
//     while (t--)
//     {
//         int num_of_student = 0;
//         cin >> n;
//         ll arr1[n], arr2[n], arr3[n];
//         for (int i = 0; i < n; i++)
//             cin >> arr1[i];
//         for (int i = 0; i < n; i++)
//             cin >> arr2[i];

//         arr3[0] = arr1[0];
//         for (int i = 1; i < n; i++)
//             arr3[i] = arr1[i] - arr1[i - 1];
//         for (int i = 0; i < n; i++)
//             if (arr3[i] >= arr2[i])
//                 num_of_student++;
//         cout << num_of_student << endl;
//     }
//     return 0;
// }

