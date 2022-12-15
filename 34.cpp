/*34. Find First and Last Position of Element in Sorted Array*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=binary( nums, target,true);
        int end=binary(nums, target,false);
        
        return vector<int>({first,end});
    }
    int binary(vector<int>& nums, int target,bool first){
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(target>nums[mid])
                s=mid+1;
            else if(target<nums[mid])
                e=mid-1;
            else{
                ans=mid;
                if(first)
                    e=mid-1;
                else
                    s=mid+1;
            }
           mid=s+(e-s)/2; 
        }
        return ans;
    }
};
