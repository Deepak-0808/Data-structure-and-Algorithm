#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if(num%4==0)
    {
        num++;
        cout<<num<<endl;
    }
    else
    {
        num--;
        cout<<num<<endl;
    }

    return 0;
}