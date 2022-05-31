#include <bits/stdc++.h>
using namespace std;
int solve(int arr[],int size,int key)
{
  
  if (key <= arr[0])
    return 0;

  for (int i = 0; i < size; i++)
  {

    if (arr[i] == key)
      return i;
    else if (key > arr[i] && key <= arr[i + 1])
      return i + 1;
    else if (key >= arr[size - 1])
      return size;
  }
 return -1;
  
}
int main()
{  int arr[] = {1, 2, 3, 4, 6};
  int size = 5, key = 0; // key = 0,2,5,8
   int temp;
  int index = solve(arr,size,key);
  
  for(int i=size;i>index;i--)
  {
    arr[i]=arr[i-1];
    
  }
  
  arr[index]=key;
  cout<<endl;
   for(int i=0;i<=size;i++)
   {
     cout<<arr[i]<<" ";
   }

  return 0;
}