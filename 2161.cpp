/*2161. Partition Array According to Given Pivot*/

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int l=0,s=0,h;
        for(auto n:nums){
            if(n<pivot)
                l++;
            else if(n==pivot)
                s++;
        }
        h=s+l;
        s=l;
        l=0;
        vector<int> num(nums.size());
        for(auto n: nums){
            if(n<pivot)
                num[l++]=n;
            else if(n==pivot)
                num[s++]=n;
            else
                num[h++]=n;
        }
        return num;
        
    }
};
