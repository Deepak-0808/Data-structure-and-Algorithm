class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        
        set<char> set1;
        int left=0,right=0;
         int max1=0;
        
       while(right<s.size())
       {
           auto it = set1.find(s[right]);
           if(it==set1.end())
           {
               max1=max(right-left+1,max1);
               set1.insert(s[right]);            
               right++;
               
           }
           else
           {
               set1.erase(s[left]);
               left++;
           }
         
           
       }
        return max1;
    }
};
