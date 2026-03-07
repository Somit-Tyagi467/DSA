class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> arr;
        int left=0;
        vector<int>::iterator index;
        for(int right=0;right<nums.size();right++){
            if((right-left)+1==k){
                auto start = nums.begin()+left;
                auto end = nums.begin()+right+1;
                index = max_element(start,end);
                arr.push_back(*index);
                left++;
            }
        }
    return arr;
    }
};