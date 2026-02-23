class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            int complmnt = target - nums[i];
            if (hash.find(complmnt) != hash.end()) {
                return {hash[complmnt], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};