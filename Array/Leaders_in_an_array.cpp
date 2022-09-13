class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
        stack<int> st;
        vector<int> v;
        int maxNum=0;
        
        if(a[n-1]>=0)
        {
             st.push(a[n-1]);
             maxNum=a[n-1];
        }
       
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=maxNum)
            {
                st.push(a[i]);
                maxNum=a[i];
            }
        }
        
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        return v;
    }
};
