class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxval = 0;
        int ans = 0;
        int curr = 0;
        for(int n : nums){
            if(n >  maxval){
                maxval = n;
                curr =  1;
                ans = 1;
            }
            else if(n == maxval){
                curr++;
                ans = max(ans, curr);
            }
            else{
                curr = 0;
            }
        }
        return ans;
    }
};