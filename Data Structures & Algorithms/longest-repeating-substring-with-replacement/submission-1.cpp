class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> pointsTable(26, 0);
         
        int left = 0;
        int maxFreq = 0;
        int ans = 0;

        for(int right = 0; right < s.size(); right++){
            pointsTable[s[right] - 'A']++;
        
            maxFreq = max(maxFreq, pointsTable[s[right] - 'A']);

            while((right - left + 1) - maxFreq > k){
                pointsTable[s[left] - 'A']--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }    
        
        return ans;
        
    }
};