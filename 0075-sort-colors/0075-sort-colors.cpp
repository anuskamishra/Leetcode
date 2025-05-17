class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                int tmp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = tmp;
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                int tmp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = tmp;
                high--;
            }
        }
    }
};