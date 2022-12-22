//268. Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        int sum=0,total=0;
        for(int i=0;i<=nums.size();i++){
            total=total+i;
        }
        for(int num:nums){
            sum=sum+num;
        }
        return total-sum;
    }
};
