class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int multiplication = 1;
        vector<int> isZero = {};
        for(auto it : nums){
            if(it == 0){
                isZero.push_back(1);
                continue;
            }
            multiplication *= it;
        }
        vector<int> result;
        for(auto it : nums){
            if(isZero.size() ==1  && it != 0 ){
                result.push_back(0);
                continue;
            }else if(isZero.size() >= 2  ){
                result.push_back(0);
            }else if(it == 0){ //there is one and wer are there 
                result.push_back(multiplication);

            }else{                
                result.push_back(multiplication/it);


            }
        }
        return result;
    }
};
