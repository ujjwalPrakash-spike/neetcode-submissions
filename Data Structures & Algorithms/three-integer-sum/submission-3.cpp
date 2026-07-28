class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());


        set<vector<int>> possibleCombination;

        int i = 0;
        int j, k;


        while(i <= nums.size() - 3){
            j = i + 1;
            k = nums.size() - 1; 
            while(j < k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    possibleCombination.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                
                if(sum > 0){
                    k--;
                }

                if(sum < 0){
                    j++;
                }
            }
            i++;
        }
        vector<vector<int>> ans(possibleCombination.begin(), possibleCombination.end());

        return ans;
        
        

    }
};
