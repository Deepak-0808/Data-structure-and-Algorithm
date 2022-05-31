// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

#include <bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
{
    // coode here
    int A=0,b=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        A++;
        else if(a[i]==1)
        b++;
        else if(a[i]==2)
        c++;

    }
    //cout<<a<<b<<c;
    for(int i=0;i<n;i++)
    {
        if(i<A)
        a[i]=0;
        else if(i<A+b)
        a[i]=1;
        else if(i<A+b+c)
        a[i]=2;

        
    }
   

}
void printArray(int a[], int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}
int main()
{
    int a[] = {2, 0, 2, 0, 1, 0, 1, 2, 2};
    int n = sizeof(a) / sizeof(a[0]);
    sort012(a, n);
    printArray(a, n);
    return 0;
}