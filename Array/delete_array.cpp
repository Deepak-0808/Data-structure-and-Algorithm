// Delete an element from a given whose position is given.


#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n,location;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter element in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the location which you have to delete."<<endl;
    cin>>location;
    if(location>=n+1)
    cout<<"Deletion not possible."<<endl;
    for(int i=0;i<n;i++)
    {
        if(i==location-1)
        {
            for(int j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }

        }
    }
    cout<<"New array::"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
                
// Delete an element from a given whose value is given 

#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n,value;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter element in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value which you have to delete."<<endl;
    cin>>value;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            for(int j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }

        }
    }
    cout<<"New array::"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}