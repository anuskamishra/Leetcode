class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int all = 0;
        for(int num : nums){
            all |= num;
        }
        int mul = 1 << (nums.size()-1);
        return all*mul;
    }
};