class Solution {
public:

    string encode(vector<string>& strs) {
        string encoding_characters = "__encodedString__";
        string global = "";
        global += to_string(strs.size()) + "#";

        for (int i = 0; i < strs.size(); i++) {
   global += to_string(strs[i].length()) + "#" + strs[i] + string(i + 1, ' ')
        + encoding_characters
        + string(i + 1, ' ');
}
        
        return global;
        
    }

    vector<string> decode(string s) {
    string secret = "__encodedString__";
    int len = secret.length();

    int index = 0;
    int n = 0;
    while (s[index] != '#') {
        n = n * 10 + (s[index] - '0');
        index++;
    }
    index++; 

    vector<string> strArr;

    for (int i = 1; i <= n; i++) {

        int lenOfString = 0;
        while (s[index] != '#') {
            lenOfString = lenOfString * 10 + (s[index] - '0');
            index++;
        }
        index++; 

        string str = "";
        for (int j = 0; j < lenOfString; j++) {
            str += s[index];
            index++;
        }

        strArr.push_back(str);
        index += i * 2 + len;
    }

    return strArr;
}
};
