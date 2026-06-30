class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> numIndex;

        for (int i = 0; i < nums.size(); i++){
            numIndex.push_back({nums[i], i}); 
        }

        sort(numIndex.begin(), numIndex.end()); 

        int l = 0;
        int r = nums.size()-1; 
        
        while(l < r){
            if (numIndex[l].first + numIndex[r].first == target){
                if (numIndex[l].second < numIndex[r].second) return {numIndex[l].second, numIndex[r].second}; 
                return {numIndex[r].second, numIndex[l].second};
            }
            else if (numIndex[l].first + numIndex[r].first > target) r--; 
            else l++; 
        }

        return {};
    }
};
