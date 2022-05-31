#include<bits/stdc++.h> 
using namespace std;

int main(){
    int fact=1,x,test,y=1;
    cin>>test;
    while(test--)
    {
        fact=1;
        cin>>x;
        while(x>0)
        {
            fact=fact*x;
            x--;

        }
        cout<<fact;
    }
    return 0;
}