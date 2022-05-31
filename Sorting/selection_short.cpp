//Selection Short

#include <bits/stdc++.h>
using namespace std;

int index_of_min_value(int j,int arr[], int n)
{
    int index=j;
    
    for (int i = j+1; i < n; i++)
    {
        if (arr[i] < arr[index])
        {
            index = i;
        }
    }
    return index;
}

int main()
{
    int n, temp;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n-1; j++)
    {
        int min_index = index_of_min_value(j,arr, n);
        cout<<min_index<<" ";
        temp = arr[j];
        arr[j] = arr[min_index];
        arr[min_index] = temp;
    }
   cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}