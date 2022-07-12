
int find_median(vector<int> v)
		{
		    
		    // Code here.
		    int ans=0;
		    int n=v.size();
		    sort(v.begin(),v.end());
		    if(n%2==0)
		    {
		        int a=v[(n/2)-1]+v[n/2];
		        return a/2;
		     }
		     else
		     {
		         return v[(n/2)];
		      }
		     return -1;
		}
