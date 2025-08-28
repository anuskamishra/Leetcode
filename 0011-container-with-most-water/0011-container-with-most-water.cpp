class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0; // left pointer
        int high = height.size() - 1; //right pointer
        int maxarea = 0;
        while(low<high){
            int area = min(height[low], height[high]) * (high-low);
            maxarea = max(area, maxarea);
            if(height[low] < height[high]) low++;
            else high--;
        }
        return maxarea;
    }
};