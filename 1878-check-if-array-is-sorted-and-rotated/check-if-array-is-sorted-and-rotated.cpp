class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breakpoint = -1;

        // Find the breakpoint where the order breaks
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                breakpoint = i;
                break;
            }
        }
        
        // If no breakpoint found, it's already sorted
        if (breakpoint == -1) return true;

        // Check if elements before the breakpoint are sorted
        for(int i = 0; i < breakpoint; i++) {
            if(nums[i] > nums[i + 1]) {
                return false;
            }
        }

        // Check if elements after the breakpoint are sorted and wrap around correctly
        for(int i = breakpoint + 1; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                return false;
            }
        }

        // Ensure the last element is smaller than or equal to the first element
        if(nums[n - 1] > nums[0]) {
            return false;
        }

        return true;
    }
};
