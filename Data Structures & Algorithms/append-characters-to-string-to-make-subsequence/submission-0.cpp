class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        for(char a:s){
            if(i < t.size() && a == t[i]) i++;
        }
        return t.size() - i;
    }
};