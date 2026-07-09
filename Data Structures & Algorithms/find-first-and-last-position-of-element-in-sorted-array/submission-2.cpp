class Solution {
public:
    int lowerBound(vector<int>& nums, int target){
        int low = 0, high = nums.size() - 1, lb = 0;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] >= target){
                lb = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return lb;
    }

    int upperBound(vector<int>& nums, int target){
        int low = 0, high = nums.size() - 1, ub = nums.size();
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] > target){
                ub = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ub;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerBound(nums, target);
        if(lb == nums.size() || nums[lb] != target) return {-1, -1};
        int ub = upperBound(nums, target);
        return {lb, ub - 1};
    }
};