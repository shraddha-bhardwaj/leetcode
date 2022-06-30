/* approach 1 
1- sort the array 
2- then select the middle element and start subtracting it from each element and take its mod ... 
3- add all the results to return final res

this is not the optimal approach 
if the number of elements is even then it's difficult to find the middle value 
take the both center values and then x+y/2 = middle value
*/

/*approach 2
we need to add some value x to the start 
we need to sub some value y from the end 
repeart it for all elements through i++ and j--
i.e x+s=e-y=n
x+y=e-s=n;
we need to find the x+y for all pairs and at last add them to get the number of moves 
*/

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int start=0;
        int end=n;
        int count=0;
        while(start<end){
            count+=abs(nums[end]-nums[start]);
            start++;
            end--;
        }
        return count;
    }
};