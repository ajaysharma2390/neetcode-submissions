class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;
        if(s.length() != t.length()) return false;

        for(auto it : s) {
            mpp[it]++;
        }
        for(auto it : t) {
            mpp[it]--;
        }
        for(auto it : s) {
            if(mpp[it] != 0) return false;
        }

        return true;
    }
};
