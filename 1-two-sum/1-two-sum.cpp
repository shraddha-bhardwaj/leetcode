class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* brute force- o(n2);
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target)
                    return {i,j};
            }
        }
        return{-1,-1};*/
       int n=nums.size();
       unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int x=nums[i];
            int y=target-x;
            if(m.find(y)!=m.end()){
                return {i,m[y]};
            }
            m[nums[i]]=i;
        }
        return {-1,-1};
    }
};