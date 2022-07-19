// 1282. Group the People Given the Group Size They Belong To

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>mymap;
        for(int i=0;i<groupSizes.size();i++)
        {
            mymap[groupSizes[i]].push_back(i);
            if(mymap[groupSizes[i]].size()==groupSizes[i])
            {
                ans.push_back(mymap[groupSizes[i]]);
                mymap[groupSizes[i]].clear();
            }
        }
        return ans;
    }
};
