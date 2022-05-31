#include<bits/stdc++.h> 
using namespace std;

int main(){
    int arr[10]={2,3,8,4,6};
    int i,x=0;

    for(i=0;i<5;i++)
    {
        if(arr[i]>x)
        x=arr[i];
    }

    for(i=0;i<5;i++)
    {
        if(arr[i]==x)
        cout<<"Greatest Index number is "<<i<<endl;
    }
    return 0;
}