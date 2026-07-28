class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
		vector<int> sols;

        while(i < j){
		if(numbers[i] + numbers[j] == target){
			sols.push_back(i+1);
			sols.push_back(j+1);
			break;
		}else if (numbers[i] + numbers[j] > target){
			j--;
			continue;
		}else if(numbers[i] + numbers[j] < target){
			i++;
		}
        }
	    return sols;
    }
};