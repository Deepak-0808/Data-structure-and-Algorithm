#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j,k=0;
    for (i = 1; i <= 4; i++)
    {   
        if(i<=4)
        k++;
        else
        k--;
        for (j = 1; j <= 7; j++)
        {

            if (j>=i&&j<=8-i)
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

