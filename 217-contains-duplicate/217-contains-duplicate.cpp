class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]) return true;
            }
        }
        return false;
        time complexity - O(N^2)
        */
        
        /* 
        TC- O(Nlog(N))
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
        */
        
    //TC- O(N) SC- O(N) - hashmap- unordered map 
      
    /* unordered_map<int,int>m;
        for(auto a: nums)m[a]++;
        for(auto a: m){
            if(a.second>1) return true;
        }
        return false; */
        unordered_set<int>s;
        for(auto a:nums)s.insert(a);
        if(nums.size()==s.size()) return false;
        return true;
    }
};