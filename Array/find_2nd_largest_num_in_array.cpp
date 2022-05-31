#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, secondhighest = 0, highestnum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > highestnum)
        {
            secondhighest = highestnum;
            highestnum = arr[i];
        }
        else if(arr[i]>secondhighest&&arr[i]<highestnum)
        {
            secondhighest=arr[i];
        }
    }
    cout << secondhighest;

    return 0;
}