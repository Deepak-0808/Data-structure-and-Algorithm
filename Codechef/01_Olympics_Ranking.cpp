#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t, sum1, sum2, G1 , S1, B1, G2 , S2, B2;
    cin>>t;
    while(t--)
    {
        cin>>G1>>S1>>B1>>G2>>S2>>B2;
        sum1=G1+S1+B1;
        sum2=G2+S2+B2;
        if(sum1>sum2)
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;

    }
    return 0;
}