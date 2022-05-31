#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a==0&&b==0&&c==0)||(a==1&&b==1&&c==1))
        {
            cout<<"0"<<endl;

        }
        else
        cout<<"1"<<endl;
    }
    return 0;
}