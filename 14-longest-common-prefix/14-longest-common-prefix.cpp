class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int m=INT_MAX;
        for(int i=0;i<n;i++){
            int size=strs[i].size();
          m=min(m,size);
        }
        string s="";
        for(int i=0;i<m;i++){
            char c=strs[0][i];
            for(int j=1;j<n;j++){
                if(c!=strs[j][i])
                    return s;
            }
            s+=c;
            
        }
        return s;
        
    }
};