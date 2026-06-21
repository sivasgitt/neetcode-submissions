class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for(char a : t){
            if(i < t.size() && s[i] == a) i++;
        }
        return i == s.size();
    }
};