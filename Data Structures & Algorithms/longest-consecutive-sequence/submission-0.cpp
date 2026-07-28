class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s;
   for(int i = 0; i < nums.size(); i++){
        s.insert(nums[i]);
   }
   
   
   int globalMaxSequence = 0;
   for(int i = 0; i < nums.size(); i++){
        int lenMaxSeq = 1;
        int start = nums[i];

        while(s.find(start + 1) != s.end()){
            lenMaxSeq++;
            start++;     
        }
        
        if(lenMaxSeq > globalMaxSequence){
            globalMaxSequence = lenMaxSeq;
        }
   }

   return globalMaxSequence;

    }
};
