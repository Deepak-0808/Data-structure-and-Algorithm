class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        
        if(n==1||n==0)
        return true;
        
        if(arr[0]>arr[1])
        return false;
        else
        {
            bool ans=arraySortedOrNot(arr+1, n-1);
            return ans;
        }
       
        return false;
    }
};
