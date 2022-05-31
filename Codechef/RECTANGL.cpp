#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a==b&&c==d)||(a==c&&b==d)||(b==c&&a==d))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}