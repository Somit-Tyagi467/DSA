class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int no_zero ; if(nums[0]!=0) no_zero=1;
        int original_sum=accumulate(begin(nums),end(nums),0);
        int sum=0;
        int i=0;
        while(i<=nums.size()){
            sum+=i;
            i++;
        }
        if(sum!=original_sum){
            return (sum-original_sum);
        }
        return sum-original_sum;
    }
};