
//Count pairs with given sum. (GFG)

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> mp;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            int temp=k-arr[i];
            if(mp.find(temp)!=mp.end())
            {
                count += mp[k-arr[i]];
            }
            mp[arr[i]]++;
        }
    return count;
        
    }
};
