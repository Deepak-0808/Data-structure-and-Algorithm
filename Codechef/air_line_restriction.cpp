#include<bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int t,A,B,C,D,E;
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>C>>D>>E;
        if(A+B<=D&&C<=E)
        {
           cout<<"YES"<<endl;
        }
        else if(B+C<=D&&A<=E)
        {
            cout<<"YES"<<endl;
        }
        else if(A+C<=D&&B<=E)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}