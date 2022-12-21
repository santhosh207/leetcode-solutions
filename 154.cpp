//154. Find Minimum in Rotated Sorted Array II

class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]>nums[e])
                s=mid+1;
            else if(nums[mid]<nums[e])
                e=mid;
            else
                e--;
             mid=s+(e-s)/2;
        }
        return nums[s];
    }
};
