#include<bits/stdc++.h> 
using namespace std;


//Linear search

   void linearsearch()
   {
    int n,search;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value which you have to search"<<endl;
    cin>>search;
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            cout<<"Element found at index : "<<i<<" and position :: "<<i+1<<endl;
            break;
            
        }
        
    }
    if(i==n)
    cout<<"Element not found"<<endl;


    
   
}
void exit(void)
{
    exit(0);
}



int main()
{
    int case_num;
    while (1)
    {
        cout << "     **** MENU ****     " << endl
             << endl;
        cout << "Enter 1. linear search" << endl;
        cout << "Enter 2. for Exit" << endl
             << endl;
        cout << "Enter your choice" << endl;
        cin >> case_num;
        switch (case_num)
        {
        case 1:
          linearsearch();
            break;
        case 2:
            exit();
        }
    }
    return 0;
}


