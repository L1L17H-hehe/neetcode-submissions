class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> f;
        priority_queue<pair<int,int>> pq; 

        for (int n: nums){
            f[n]++; 
        }

        for (auto& [num,freq]: f){
            pq.push({freq, num}); 
        }

        for (int i = 0; i < k; i++){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;

    }
};
