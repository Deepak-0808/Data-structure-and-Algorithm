#include<bits/stdc++.h> 
using namespace std;
void solve()
{
     string x,y;
        int count=0;
        cin>>x>>y;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]==y[i])
            count++;
            else if(x[i]=='?')
            count++;
            else if(y[i]=='?')
            count++;
        }
        if(count==y.size())
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--)
    {   
        solve();
    }
    return 0;
}