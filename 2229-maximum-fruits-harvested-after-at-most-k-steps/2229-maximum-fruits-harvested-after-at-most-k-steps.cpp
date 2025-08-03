class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        int left = 0;
        int right = 0;
        int currFruits = 0;
        int maxFruits = 0;
        while(right < n){
            currFruits += fruits[right][1];
            while(left <= right && !canReach(fruits, left, right, startPos, k)){
                currFruits -= fruits[left][1];
                left++;
            }
            maxFruits = max(maxFruits, currFruits);
            right++;
        }
        return maxFruits;
    }
    private:
        bool canReach(vector<vector<int>>& fruits, int left, int right, int startPos, int k) 
    {
        int leftPos = fruits[left][0];
        int rightPos = fruits[right][0];

        int minSteps = min(abs(startPos - leftPos) + (rightPos - leftPos),
                           abs(startPos - rightPos) + (rightPos - leftPos));

        return minSteps <= k;
    }
};