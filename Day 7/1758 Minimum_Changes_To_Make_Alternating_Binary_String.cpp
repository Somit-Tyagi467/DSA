//Leetcode daily problem
class Solution {
public:
    int minOperations(string s) {
        int count=0;
        for(int i =0;i<s.size();i++){
            if(i%2==0){
                if(s[i]!='0') count++;
            }
            else {
                if(s[i]!='1') count++;
            }
        }
        int min_op = min(count,int(s.size()-count));
        return min_op;
    }
};