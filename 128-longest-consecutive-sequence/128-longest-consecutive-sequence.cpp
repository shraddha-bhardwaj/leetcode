class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        /* for(int i=0;i<nums.size();i++){
        s.insert(nums[1]);
        }
        */
        int ls=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1) !=s.end())
                continue;
            else{
                int count=0;
                int curr=nums[i];
            
            while(s.find(curr)!=s.end()){
                count++;
                curr++;
                ls=max(ls,count);
                
            }
            }
        }
        return ls;
    }
};