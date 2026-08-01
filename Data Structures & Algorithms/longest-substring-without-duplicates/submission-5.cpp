class Solution {
public:
    	int lengthOfLongestSubstring(string s) {

		int i = 0;
		int j = 0;
		int globalSeqLen = 0;
		int localSeqLen = 0;

		map<char, int> charMap;
        
		while (j < s.size()) {
        auto it = charMap.find(s[j]);

        if (it == charMap.end()) {
            charMap.insert({s[j], j});
            localSeqLen++;
        } else {
            i = max(i, it->second + 1);
            localSeqLen = j - i + 1;
            it->second = j;
        }

        globalSeqLen = max(globalSeqLen, localSeqLen);

        j++;
}
		
		return globalSeqLen;
	}
};
