class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> set1;
        for(int i=0;i<n;i++)
        {
            set1.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            set1.insert(b[i]);
        }
        return set1.size();
        
    }
};
