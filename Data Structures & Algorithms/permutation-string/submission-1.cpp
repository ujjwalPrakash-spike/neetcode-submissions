class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int windowSize = s1.length();
        sort(s1.begin(), s1.end());
        
        int i = 0;
        int j = windowSize - 1;

        while(j < s2.size()){
            string processStr = s2.substr(i, windowSize);

            sort(processStr.begin(), processStr.end());

            if(processStr == s1){
                return true;
            }
            
            i++;
            j++;
            
        }
        return false;
    }
};
