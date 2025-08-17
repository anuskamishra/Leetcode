class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target && ( i==0 || nums[i-1] != target) ){
                ans.push_back(i);
            }
            if((i==nums.size()-1 || nums[i+1] != target ) && nums[i] == target){
                ans.push_back(i);
            }
        }
        if(ans.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};