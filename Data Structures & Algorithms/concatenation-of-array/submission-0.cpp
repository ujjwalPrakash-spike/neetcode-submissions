class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
          int n = nums.size();
        vector<int> numsCopy(2*n, 0);
        int index = 0;
        for(auto it: nums){
            numsCopy[index] = it;
            numsCopy[n+index] = it;
            index++;
        }
        
      
        return numsCopy;
    }
};