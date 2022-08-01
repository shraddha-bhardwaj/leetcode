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
        
    /* using map
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
        */
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int l=0;
        int h=nums.size()-1;
        if(nums.size()==2){
            return {0,1};
        }
        while(l<h){
            if((v[l].first+v[h].first)==target)
                return {v[l].second,v[h].second};
            else if((v[l].first+v[h].first)>target)
                h--;
            else if((v[l].first+v[h].first)<target)
                l++;
            
        }
        return {-1,-1};
    }
};