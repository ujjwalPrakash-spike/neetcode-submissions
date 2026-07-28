class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> mp;
    for(auto it : nums){
        if(mp.find(it) == mp.end()){
            mp.insert({it, 1});
        }else {
            mp[it]++;
        }
    }
    
    vector<int> final;
    vector<pair<int,int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
    return a.second > b.second;
    });

    for(int i = 0; i < k; i++){
        final.push_back(vec[i].first);
    }
    return final;
    }
};

