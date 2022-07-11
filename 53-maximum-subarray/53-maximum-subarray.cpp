class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0,ms=0;
        bool f= true;
        int rr=INT_MIN;
        for(auto x: nums){
            if(x>0) f=false;
            if(x>rr){
             rr=x;
            }
        }
        if(f) return rr;
        for(int i=0;i<nums.size();i++){
            cs=cs+nums[i];
            if(cs<0){
                cs=0;
            }
            ms=max(ms,cs);
        }
        return ms;
        
    }
};