class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int windowSize = s1.length();

        vector<int> hashset(26);
        for(auto it : s1){
            hashset[it - 'a']++;
        }
        
        int i = 0;
        int j = windowSize - 1;

        while(j < s2.size()){
            vector<int> practiseHashset(26);
            string subStr = s2.substr(i, windowSize);

            for(auto it : subStr){
                practiseHashset[it - 'a']++;
            }
            
            if(practiseHashset == hashset) return true;

            i++;
            j++;
        }
        return false;
    }
};
