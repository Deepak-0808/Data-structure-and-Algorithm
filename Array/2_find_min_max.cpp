// #include<bits/stdc++.h> 
// using namespace std;

// struct min
// {
//     int min;
//     int max;

// };
//     struct min d;

// void min_max_element(int arr[],int end)
// {
//     if(end==0)
//     {
//       d.max=arr[0];
//       d.min=arr[0];
//     } 
//     else if(arr[0]>arr[1])
//     {
//         d.max=arr[0];
//         d.min=arr[1];
//     } 
//     else if(arr[1]>arr[0])
//     {
//         d.max=arr[1];
//         d.min=arr[0];
//     }
//     for(int i=2;i<=end;i++)
//     {
//         if(arr[i]>d.max)
//         {
//             d.max=arr[i];

//         }
//         else if(arr[i]<d.min)
//         {
//             d.min=arr[i];
//         }
        
//     }

    
// }

// int main(){
    //  int arr[]={0,6,9,1,4,66,3,88};
    //  int n = sizeof(arr)/sizeof(arr[0]);cout<<n<<endl;
    // min_max_element(arr,n-1);
//     cout<<"Maximum ="<<d.max<<endl<<"Minimum ="<<d.min<<endl;
    
//     return 0;
// }

#include<bits/stdc++.h> 
using namespace std;


pair<int,int> min_max_element(int arr[],int n){

    // vector<int> ans;
    pair<int,int> p;
    int _max = INT_MIN;
    int _min = INT_MAX;

    for(int i=0;i<n;i++)
    {
        _max = max(_max  , arr[i]);
        _min = min(_min, arr[i]);
    }
    p.first = _max;
    p.second = _min;

    return p;

// return ans;
    // cout<<"Max = "<<_max <<" Min = "<<_min;
}
int main(){
     int arr[]={0,6,9,1,4,66,3,88};
     int n = sizeof(arr)/sizeof(arr[0]);
     pair<int, int> ans = min_max_element(arr,n);
     cout<<ans.first<<"  "<<ans.second<<endl;
     
    return 0;
}