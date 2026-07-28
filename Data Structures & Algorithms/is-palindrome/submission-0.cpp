class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string finalS = "";
        for(auto it : s){
            if(!isalnum(it)){
                continue;
            }
            finalS.push_back(tolower(it));
            
        }

        cout << finalS << endl;
        int i = 0;
        int j = finalS.length() - 1;
        while(i <= j) {
            cout << finalS[i] << "  " << finalS[j] << endl;
            if(finalS[i] != finalS[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
