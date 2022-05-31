#include <bits/stdc++.h>
using namespace std;
// #define ll long long

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//    ll int t,n, c,sum=0;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n>>c;
//         int arr[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         for(int i=0;i<n;i++)
//         {
//             sum+=arr[i];
//         }

//         if(c>=sum)
//         {
//             cout<<"Yes"<<endl;
//         }
//         else
//         {
//         cout<<"No"<<endl;
//         }
//     }
//     return 0;
// }

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        unsigned int n = 0, c = 0, i, a[102], total = 0;
        cin >> n >> c;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            total = total + a[i];
        }
        if (total <= c)
            cout <<"Yes"<< endl;
        else
            cout <<"No"<< endl;
    }
    return 0;
}