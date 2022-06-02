class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        int start=0;
        int end=n-1;
        while(start<end){
            if(numbers[start]+numbers[end]>target){
                end--;
            }
            else if(numbers[start]+numbers[end]<target){
                start++;
            }
            else{
                return {start+1,end+1};
            }
            
        }
        return numbers;
        
    }
};