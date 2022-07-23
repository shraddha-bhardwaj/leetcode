class Solution {
public:
    int firstindex(vector<int> &nums,int target){
        int l=0;
        int h=nums.size()-1;
        int ans= -1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                ans=mid;
                h=mid-1;
            }
            else if(nums[mid]>target)
                h=mid-1;
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    int lastindex(vector<int> &nums,int target){
        int l=0;
        int h=nums.size()-1;
        int ans= -1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]>target)
                h=mid-1;
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        if(nums.size()==1){
            if(nums[0]==target)return{0,0};
            else{
                return {-1,-1};
            }
        }
        int start=firstindex(nums,target);
        int end=lastindex(nums,target);
        if(start==-1) return {-1,-1};
        
        return {start,end};
    }
};