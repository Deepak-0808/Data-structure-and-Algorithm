#include<bits/stdc++.h> 
using namespace std;
void solve()
{
    double ans,quantity, price;
    cin>>quantity>>price;
    
    ans=quantity*price;
    if(quantity>1000)
    {
      ans=ans-(ans*10/100);
    }
    cout <<fixed;
    cout <<setprecision(6);
    cout << ans << "\n";    
}


int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}