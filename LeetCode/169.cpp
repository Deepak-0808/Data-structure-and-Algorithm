class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int element=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==element)
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                element=nums[i];
                count++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(element==nums[i])
                ans++;
        }
        if(ans>nums.size()/2)
            return element;
        
        return element;
    }
};
