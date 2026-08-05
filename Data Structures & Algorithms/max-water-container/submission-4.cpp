class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;


        int height = min(heights[left],heights[right]);
        int width = right - left;

        int maxArea = height * width;
        int localArea = maxArea;

        while(left < right){
            height = min(heights[left],heights[right]);
            width = right - left;
            localArea = height * width;
            
            if(heights[left] <= heights[right]){
                left++;
            }else{
                right--;
            }
            

            maxArea =  max(localArea,maxArea);
            
        }

        return maxArea;
    }
};
