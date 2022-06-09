class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i=i+2)
        {
            int temp=nums[i];
            while(temp--)
            {
                ans.push_back(nums[i+1]);
            }
           
        }
        return ans;
    }
};
