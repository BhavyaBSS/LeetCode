class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> freq;
        for(int& num : nums) freq[num]++;

        vector<vector<int>> buckets(n+1);
        for(auto& [num, f] : freq){
            buckets[f].push_back(num);
        }

        vector<int> ans;
        for(int i = n; i >= 0; i--){
            if(ans.size() >= k) break;
            
            if(!buckets[i].empty()) ans.insert(ans.end(), buckets[i].begin(), buckets[i].end());
        }

        return ans;
    }
};