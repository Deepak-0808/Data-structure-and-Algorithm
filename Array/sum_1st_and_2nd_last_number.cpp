#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=n/10;
    x=x%10;
    while(n>9)
    {
        n=n/10;
    }
     cout<<n+x;
    return 0;
}












