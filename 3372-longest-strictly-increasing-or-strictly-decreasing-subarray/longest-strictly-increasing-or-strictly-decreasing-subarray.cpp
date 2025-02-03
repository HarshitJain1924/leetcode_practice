class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count=1;
        int ans = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
            }
            else{
                count = 1;
            }
            ans = max(ans,count);
        }
        int cnt = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            ans = max(ans,cnt);
        }
        
        return ans;
    }
};