//Basic approach time complexity is O(n) 1ms beats 55% cases; But can be more optimal

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int> map;
        for(int i=0;i<t.size();i++){
            map[t[i]]++;
        }
        for(int j=0;j<s.size();j++){
            map[s[j]]--;
        }
        int False =1;
        for(const auto& pair: map){
            if(pair.second!=0){
                False=0;
            }
        }
        return False;
    }
};