class Solution 
{
public:
    int maximumDifference(vector<int>& nums) 
    {
        // Step 1 : Initialization
        int minSoFar = nums[0];  
        int maxDiff = -1;

        // Step 2 : Apply Loop and Loic
        for (int i = 1; i < nums.size(); i++) 
        {  
            if (nums[i] > minSoFar) 
            {
                maxDiff = max(maxDiff, nums[i] - minSoFar);
            } 
            else 
            {
                minSoFar = nums[i];
            }
        }

        // Step 3 : Return the Result
        return maxDiff;  
    }
};