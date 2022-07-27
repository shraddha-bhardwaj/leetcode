class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MAX;
        int sum=0;
        for(int i=0;i<prices.size();i++){
            m=min(m,prices[i]);
            sum=max(sum,prices[i]-m);
        }
        return sum;
    }
};