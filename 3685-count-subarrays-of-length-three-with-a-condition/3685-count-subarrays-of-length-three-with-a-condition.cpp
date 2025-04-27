class Solution {
public:
    int countSubarrays(vector<int>& nums)
    {
        int count = 0;
       int n = nums.size();
       for(int i = 0;i<=n-3;i++)
       {
           int sum = 0;
           int first = nums[i];
           int second = nums[i+1];
           int third = nums[i+2];

           sum = (first +third);
           
           if((double(second)/2)==sum)
           {
            count++;
           }
       }
       return count; 
    }
};