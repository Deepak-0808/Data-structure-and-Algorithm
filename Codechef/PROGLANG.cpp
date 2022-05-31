#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t,A,B,A1,B1,A2,B2;
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>A1>>B1>>A2>>B2;
        if((A==A1&&B==B1)||(A==B1&&B==A1))
        cout<<"1"<<endl;
        else if((A==A2&&B==B2)||(A==B2&&B==A2))
        cout<<"2"<<endl;
        else
        cout<<"0"<<endl;
    }
    return 0;
}