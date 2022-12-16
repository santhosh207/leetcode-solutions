//33. Search in Rotated Sorted Array

class Solution {
public:
    int search(vector<int>& nums, int target) {
       int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        
        while(s<=e){
            if(target==nums[mid])
                return mid;
            else if(nums[mid]>=nums[s]){
                if(target>=nums[s] && target<nums[mid])
                    e=mid-1;
                else
                    s=mid+1;
            }
            else{
                if(target<=nums[e] && target>nums[mid])
                    s=mid+1;
                else
                    e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1; 
    }
};
