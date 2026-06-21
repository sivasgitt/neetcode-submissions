class Solution {
    public boolean hasDuplicate(int[] nums) {
        int n = nums.length;
        int cnt = 0;
        for(int a = 0;a < n;a++){
            for(int b = a+1;b<n;b++){
                if(nums[a]==nums[b]) cnt++;
            }
        }if(cnt>0){
            return true;
        }
        return false;
    }
}