class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int longestStreak = 1;
        int currentStreak = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                if (nums[i] == nums[i - 1] + 1) {
                    currentStreak++;
                } else {
                    longestStreak = max(longestStreak, currentStreak);
                    currentStreak = 1;
                }
            }
        }
        
        return max(longestStreak, currentStreak);
    }
};
// solution 2 using hash set
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for(int num : s) {

            // check if it is the start of a sequence
            if(s.find(num - 1) == s.end()) {

                int currentNum = num;
                int count = 1;

                while(s.find(currentNum + 1) != s.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};