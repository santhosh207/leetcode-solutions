//287. Find the Duplicate Number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int s=0,e=nums.size()-1;
       int mid=s+(e-s)/2;
        while(s<=e){
            int c=0;
            for(int n:nums){
                if(n<=mid)
                    c++;
            }
            if(c<=mid)
                s=mid+1;
            else
                e=mid-1;   
            mid=s+(e-s)/2;
        }
        return s;
    }
};
