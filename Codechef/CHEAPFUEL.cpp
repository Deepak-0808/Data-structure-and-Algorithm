#include<bits/stdc++.h> 
using namespace std;
void solve(int X,int Y,int A,int B,int K)
{
    while(K--)
    {
      X=X+A;
      Y=Y+B;
    }  
    if(X<Y)
    cout<<"PETROL"<<endl;
    else if(Y<X)
    cout<<"DIESEL"<<endl;
    else
    cout<<"SAME PRICE"<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,A,B,K;
        cin>>X>>Y>>A>>B>>K;
        solve(X,Y,A,B,K);
    }
    return 0;
}