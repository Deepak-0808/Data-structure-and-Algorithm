// Question 2341. Maximum Number of Pairs in Array

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> ans;
        int pair=0;
        int n=nums.size();
        if(n==1)
        {
            ans.push_back(pair);
            ans.push_back(n);
            return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            
            if(nums[i]==nums[i+1])
            {
                pair++;
                i++;
            }
            if(i+1==n-1)
                    break;
        }
         n=n-pair*2;
         ans.push_back(pair);
         ans.push_back(n);
        return ans;
    }
};
