class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int k=1;
        for(int right=1;right<nums.size();right++){
            if(nums[right]!=nums[left]){
                nums[++left]=nums[right];
                k+=1;
            }
        }
        return k;
    }
};