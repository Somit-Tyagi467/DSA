// Leetcode daily problem
class Solution {
public:
    bool checkOnesSegment(string s) {
        int i=0;
        while(i<s.size() && s[i]!='0'){
            i++;
        }
        for(i;i<s.size();i++){
            if(s[i]=='1'){
                return false;
            }
        }
        return true;
    }
};