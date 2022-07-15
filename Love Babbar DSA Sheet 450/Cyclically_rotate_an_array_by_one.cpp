void rotate(int arr[], int n)
{
    int lastE=arr[n-1];
    int temp;
    for(int i=n-1;i>=0;i--)
    {
      arr[i]=arr[i-1];
    }
    arr[0]=lastE;
}
