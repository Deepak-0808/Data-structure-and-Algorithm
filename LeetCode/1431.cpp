class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       
        vector<bool> ans;
        for(int i=0;i<candies.size();i++)
        {
             int temp=1;
            
            for(int j=0;j<candies.size();j++)
            {
                if(candies[i]+extraCandies<candies[j])
                {
                    ans.push_back(false);
                    temp=0;
                    break;
                }
                
                    
            }
            if(temp!=0)
                ans.push_back(true);
        
        }
        return ans;
    }
};
