class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int max=0;
        
        for(int i=0;i<n;i++)
        {
            int count=1;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                    count++;
            }
            if(count>max)
                max=count;
        }
        return max;
    }
};
