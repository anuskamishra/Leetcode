class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s2 = 0;
        for(int i=0; i<n; i++){
            s2 += nums[i];
        }
        int s1 = (n *(n+1))/2;
        return s1 - s2;
    }
};