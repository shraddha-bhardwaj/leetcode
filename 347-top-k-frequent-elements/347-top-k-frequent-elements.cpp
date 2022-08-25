class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int>v(k);
        vector<pair<int,int>>a;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            a.push_back({it.second,it.first});
             
        }
        sort(a.rbegin(),a.rend());
        for(int i=0;i<k;i++){
            v[i]=a[i].second;
        }
        return v;
    }
};