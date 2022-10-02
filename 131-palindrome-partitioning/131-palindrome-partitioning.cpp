class Solution {
public:
    bool isPalindrome(string &s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;

    }
    
    void helper(string &s, int ind, vector<string>&v, vector<vector<string>>&ans){
        if(ind==s.length()){
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(isPalindrome(s,ind,i)){
                v.push_back(s.substr(ind,i-ind+1));
                helper(s,i+1,v,ans);
                v.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        helper(s,0,v,ans);
        return ans;   
    }
};