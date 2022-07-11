class Solution {
public:
    void reverseString(vector<char>& s) {
        int n= s.size();
        //for(int i=0;i<n/2;i++){
            
        //swap(s[i],s[n-i-1]);
        //}
        
        int start=0,end=n-1;
        while(start<end){
            int temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            end--;
            start++;
        }
        
    }
};