#include<bits/stdc++.h> 
using namespace std;

int main(){
    int test;
    int n; 
    cin>>test;
    while(test--)
    {  
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        int count=0;
        for (int i = 0; i < n; i++)
        {
            int v=count+i+1;
            if(v==arr[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
        
        
    }
    return 0;
}