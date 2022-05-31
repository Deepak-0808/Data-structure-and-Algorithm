#include<bits/stdc++.h> 
using namespace std;

int main(){
    float ini_anount, finial_amount=0;
    int withd_amount;
    cin>>withd_amount>>ini_anount;
    if((withd_amount+0.5)<=ini_anount && withd_amount%5==0)
    {
        finial_amount=ini_anount-(withd_amount+0.5);
        cout<<finial_amount;
    }
    else
    { 
        cout<<ini_anount;                       
    } 
    return 0;
}


