class Solution {
public:
    bool checkStrings(string s1, string s2) {
        bool possible = false;
        vector<int> evenCounts(26,0);
        vector<int> oddCounts(26,0);
        for(int i=0;i<s1.size();i++){
            if (i % 2 == 0) {
                evenCounts[s1[i] - 'a']++;
                evenCounts[s2[i] - 'a']--;
            } else {
                oddCounts[s1[i] - 'a']++;
                oddCounts[s2[i] - 'a']--;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (evenCounts[i] != 0 || oddCounts[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};