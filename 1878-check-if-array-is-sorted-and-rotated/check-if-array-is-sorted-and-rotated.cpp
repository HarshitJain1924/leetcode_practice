class Solution {
public:
    bool check(vector<int>& nums) {
        int bp = -1;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                bp = i+1;
            }
        }
        if(bp==-1) return true;

        for(int i=0;i<bp-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        for(int i=bp;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return nums[n - 1] <= nums[0];
    }
};