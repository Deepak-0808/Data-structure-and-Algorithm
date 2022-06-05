class Solution {
public:
    string defangIPaddr(string address) {
        string temp;
        int i=0;
        while(i<address.size())
        {
            if(address[i]!='.')
                temp.push_back(address[i]);
                
            if(address[i+1]=='.')
            {
                temp.push_back('[');
                 temp.push_back('.');
                 temp.push_back(']');
                i=i+2;
            }
            else
            {
               i++; 
            }
            
        }
        return temp;
    }
};
