#include <iostream>
using namespace std;

int main(){
    int n,k,i=0,num1,num2=0;
    
    cin>>n>>k;
    num1=n;
    int ar[num1];
    while(n--)
    {
        cin>>ar[i];
        i++;
    }
    while(num1--)
    {
        if(ar[num1]%k==0)
        {
            num2++;
        }

    }
    cout<<num2;

    return 0;
}