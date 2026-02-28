class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result=nums[0];
        int total = 0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
            if(total>result) result=total;
            if(total<0) total=0;
        }
        return result;
    }
};