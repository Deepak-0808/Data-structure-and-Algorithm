#include<bits/stdc++.h> 
using namespace std;

void binary_search(void)
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
            cout << "Element " << value << " : is found at index : " << mid << " and position : " << mid + 1 << endl<<endl<<endl;
            
            break;
        }
        else if (value > arr[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

     if(low>high)
    cout << "Element not found" << endl;

}

void exit()
{
    exit(0);
}

int main()
{
    int case_num;
    while (1)
    {
        cout << "     **** MENU ****     " << endl
             << endl;
        cout << "Enter 1. Binary search" << endl;
        cout << "Enter 2. for Exit" << endl
             << endl;
        cout << "Enter your choice" << endl;
        cin >> case_num;
        switch (case_num)
        {
        case 1:
          binary_search();
            break;
        case 2:
            exit();
        }
    }
    return 0;
}
