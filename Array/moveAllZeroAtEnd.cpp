#include <bits/stdc++.h>
using namespace std;
void ans(int arr[], int n)
{
    int count =0;
    for (int i = 0; i <n; i++)
    {
        if (arr[i] !=0)
        {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }
}

int main()
{
    int arr[] = {4, 0, 2, 0, 4, 0, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    ans(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}