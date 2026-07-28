class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       set<int> ls;
        for(auto it : nums){
            ls.emplace(it);
        }
        
        return ls.size() == nums.size() ? false : true ;
       
    }
};