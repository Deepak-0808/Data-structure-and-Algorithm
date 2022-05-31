#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int count = 0;
    cin >> s;

    if (s.length() % 2 == 0)
    {
        for (int i = 0; i < s.length() / 2; i++)
        {
            for (int j = s.length() / 2; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    s[j] = '0';
                    break;
                }
            }
        }
        int count=0;
        for(int j=s.length()/2;j<s.length();j++)
        {
            if(s[j]!='0')
            count++;
        }
        if(count==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else
    {
        for (int i = 0; i < s.length() / 2; i++)
        {
            for (int j = (s.length() / 2) + 1; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    s[j] = '0';
                    break;
                }
            }
        }
        int count=0;
        for(int j=(s.length()/2)+1;j<s.length();j++)
        {
            if(s[j]!='0')
            count++;
        }
        if(count==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
   
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}