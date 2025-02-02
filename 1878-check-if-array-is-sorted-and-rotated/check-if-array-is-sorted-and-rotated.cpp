class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;  // Count of places where nums[i] > nums[i+1]
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i+1) % n]) {  // Check decreasing order
                count++;
            }
            if(count > 1) return false;  // More than one drop means invalid rotation
        }
        return true;
    }
};
