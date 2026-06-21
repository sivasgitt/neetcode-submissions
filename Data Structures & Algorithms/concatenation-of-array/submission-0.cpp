class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> arr;
        for(int i=1;i<3;i++){
            for(int n:nums){
                arr.push_back(n);
            }
        }
        return arr;
    }
};