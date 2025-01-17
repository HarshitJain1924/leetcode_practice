class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j &&arr[i]+arr[j]==target) return {i,j};
            }
        }
        return {};   
    }
};