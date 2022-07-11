class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long max1=arr[0];
        long long min1=arr[0];
        long long res=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]==0)
            {
                max1=1;
                min1=1;
                continue;
            }
            long long current=arr[i];
            long long temp1=arr[i]*max1;
            long long temp2=arr[i]*min1;
            max1=max(temp1,temp2);
            max1=max(max1,current);
            min1=min(temp1,temp2);
            min1=min(min1,current);
            res=max(res,max1);
        }
        return res;
	}
};
