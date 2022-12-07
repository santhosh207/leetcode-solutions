/* Two Sum*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i=0,j=1;
        vector<int> ans;
        while(i<nums.size()){
            if(j>=nums.size()){
                i+=1;
                j=i+1;
            }
            else if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
            
            else{
                j++;
            }
        }
        return ans;
        
    }
};
