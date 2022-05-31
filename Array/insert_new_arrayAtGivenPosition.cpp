
// Insert a new element at a given position.




#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n,num;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    int position;
    cout<<"Enter the position between 1-"<<n<<endl;
    cin>>position;
    cout<<"Enter the number "<<endl;
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(position==(i+1))
        {
            arr[i]=num;
        }
    }
    cout<<"New array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

