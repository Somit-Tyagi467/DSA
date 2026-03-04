class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> hash;
        hash.insert({0,-1});
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(hash.find(sum%k)!=hash.end()){
                if(i-hash[sum%k]>=2){
                    return true;
                }
            }
            else{
                hash.insert({sum%k,i});
            }
        }
        return false;
    }
};