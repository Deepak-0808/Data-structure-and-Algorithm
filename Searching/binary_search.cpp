// Binary Search

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, value;
    int mid, low, high;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the value of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value which you have to search" << endl;
    cin >> value;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (value == arr[mid])
        {
            cout << "Element "<<value<<" : is found at index : " << mid << " and position : " << mid + 1 << endl;
            return 0;
        }
        else if (value > arr[mid])
        {
            low = mid + 1;
        }
        else 
            high = mid - 1;
        

        
    }
  
    cout << "Element not found" << endl;

    return 0;
}