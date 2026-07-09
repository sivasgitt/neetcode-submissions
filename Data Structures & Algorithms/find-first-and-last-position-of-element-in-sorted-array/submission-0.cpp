class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // int first = -1, last = -1;
        int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(first == nums.size() || nums[first] != target) return {-1,-1};
        else return {first, last-1};
    }
};