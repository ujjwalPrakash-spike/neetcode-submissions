class Solution {
public:
    bool isValid(string s) {
        stack<char> seq;

        if(s.length() < 2){
            return false;
        }

        map<char, char> charMap;
        map<char, char> charRevMap;
        charMap.insert({'{', '}'});
        charMap.insert({'(', ')'});
        charMap.insert({'[', ']'});

        charRevMap.insert({'}', '{'});
        charRevMap.insert({')', '('});
        charRevMap.insert({']', '['});

        int i = 0;

        if(charMap.find(s[i]) == charMap.end()){
            return false;
        }

        while(i < s.length()){
            auto it = charMap.find(s[i]);
            
            if(it != charMap.end()){
                seq.push(s[i]);
            }else{
                if(seq.empty()){
                    return false;
                }
                char temp = seq.top();
                if(temp != charRevMap[s[i]]){
                    return false;
                }
                seq.pop();
            }
            i++;
        }

        if(seq.size() > 0) return false;
        return true;
        
    }
};
