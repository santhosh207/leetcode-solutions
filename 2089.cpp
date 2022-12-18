//2089. Find Target Indices After Sorting Array

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int start=binary(nums,target,true);
        int end=binary(nums,target,false);
        vector<int> ans;
        if(start!=-1 && end!=-1){
            for(int i=start;i<=end;i++)
                ans.push_back(i);
        }
        return ans;
    }
    int binary(vector<int>& nums, int target,bool boolean){
        int ans=-1;
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
       
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                if(boolean)
                    e=mid-1;
                else 
                    s=mid+1;
            
            }
            else if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
            mid=s+(e-s)/2;
        }
        return ans;
    }
};
