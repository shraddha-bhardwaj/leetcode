// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long int d=0;
    long long int mini=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i+m-1<n;i++){
        d=abs(a[i+m-1]-a[i]);
        mini=min(mini,d);
        
    }
    return mini;
    
    }   
};
