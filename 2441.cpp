/*2441. Largest Positive Integer That Exists With Its Negative*/

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,h=nums.size()-1;
        int sum;
        while(l<h){
            sum=nums[l]+nums[h];
            if(sum==0)
                return nums[h];
            else if(sum<0)
                l++;
            else
                h--;
        }
        return -1;
    }
};
