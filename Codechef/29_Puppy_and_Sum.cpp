#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,D,N,S;
    cin>>t;

    while(t--)
    {
        cin>>D>>N;
        while(D--)
        {
            S=N*(N+1)/2;
            N=S;
        }
        cout<<S<<endl;
    }
    return 0;
}