#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j,k=0;
    for (i = 1; i <= 7; i++)
    {   
        if(i<=4)
        k++;
        else
        k--;
        for (j = 1; j <= 7; j++)
        {

            if (j >= 5 - k && j <= 3 + k)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl; 
    }
    return 0;
}

