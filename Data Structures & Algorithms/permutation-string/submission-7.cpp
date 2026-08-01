
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int windowSize = s1.length();

        vector<int> hashset(26);
        for(auto it : s1){
            hashset[it - 'a']++;
        }
        

        int i = 0;
        int j = 0;

        vector<int> practiseHashset(26);
        while(j < s2.size()){
            
            practiseHashset[s2[j] - 'a']++;
            cout << s2[j] << " -> " <<practiseHashset[s2[j] - 'a'] << endl;
            if(j - i == windowSize - 1){
                if(practiseHashset == hashset) return true;
                
                    practiseHashset[s2[i] - 'a']--;
                
                i++;
                j++;
                continue;
            }
            j++;
        }
        return false;
    }
};
