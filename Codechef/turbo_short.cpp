#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,r=0,temp=0;
    cin >> t;
    int arr[t];
    while  (r<t)
    {
        cin >> arr[r];
        r++;
    }
    for( r=0;r<t;r++)
    {   
        for(int y=r+1;y<t;y++)
        {
            if(arr[r]>arr[y])
            {
            temp=arr[r];
            arr[r]=arr[y];
            arr[y]=temp;
            }
        }
    }
     for( r=0;r<t;r++)
     {
         cout<<arr[r];
     }
    return 0;
}

