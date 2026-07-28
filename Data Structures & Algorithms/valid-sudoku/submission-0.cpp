class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<unordered_set<int>> xAxis(9);

        vector<unordered_set<int>> yAxis(9);

        vector<unordered_set<int>> boxes(9);

        for(int j = 0; j < 9; j++){
            for(int i = 0; i < 9; i++){
                if(board[i][j] != '.'){
                    int boxIndex = (i/3) * 3 + (j/3); 
                    if (xAxis[j].find((board[i][j]- '0')) == xAxis[j].end()){
                        xAxis[j].insert((board[i][j]-'0'));
                    }else{
                        return false;
                    }

                    if(yAxis[i].find(board[i][j]-'0') == yAxis[i].end()){
                        yAxis[i].insert((board[i][j]-'0'));
                    }else{
                        return false;
                    }

                    if(boxes[boxIndex].find(board[i][j]- '0') == boxes[boxIndex].end()){
                        boxes[boxIndex].insert((board[i][j]- '0'));
                    }else {
                        return false;
                    }
                }
            }
        }
    
    return true;
        
    }
};
