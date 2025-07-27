class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=1; i<n-1; i++){
            int left = nums[i-1];
            while(i<n-2 && nums[i] == nums[i+1]){
                i++;
            }
            if(nums[i]> left && nums[i]>nums[i+1]){
                ans++;
            }
            if(nums[i] < left && nums[i] < nums[i+1]){
                ans++;
            }
        }
        return ans;
    }
};