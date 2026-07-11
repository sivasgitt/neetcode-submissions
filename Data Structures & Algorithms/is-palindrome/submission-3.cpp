class Solution {
public:
    bool isPalindrome(string s) {
        string lc = "";
        int cnt=0;
        for(char ch : s){
            if(isalnum(ch)){
                lc += tolower(ch);
            }
        }
        string temp = "";
        for(int i=lc.size()-1;i>=0;i--){
            temp += lc[i];
        }
        return temp == lc;
    }
};