class Solution {
public:
    int firstOccurrence(vector<int>& nums, int target){
        int low=0, high=nums.size()-1;
        int lb=-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                lb = mid;
                high = mid - 1;
            }
            else if(nums[mid] > target) high = mid - 1;
            else low = mid+1;
        }
        return lb;
    }

    int lastOccurrence(vector<int>& nums, int target){
        int low=0, high=nums.size()-1;
        int ub=-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                ub = mid;
                low = mid + 1;
            }
            else if(nums[mid] > target) high = mid - 1;
            else low = mid+1;
        }
        return ub;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = firstOccurrence(nums,target);
        if(lb == -1) return {-1,-1};
        int ub = lastOccurrence(nums,target);
        return {lb, ub};
    }
};