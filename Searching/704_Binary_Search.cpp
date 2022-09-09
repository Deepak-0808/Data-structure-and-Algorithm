class Solution {
public:
    int binarySearch(vector<int>nums,int start,int end,int target)
    {
        int mid=(start+end)/2;
        if(start>end)
            return -1;
        if(nums[mid]==target)
            return mid;
        if(target>nums[mid])
            return binarySearch(nums,mid+1,end,target);
        else
            return binarySearch(nums,start,mid-1,target);
    }
    
    int search(vector<int>& nums, int target) {
        
        int start=0,end=nums.size()-1;
        return binarySearch(nums,start,end,target);
    }
};
