class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,pair<int,int>> diff; 
        
        for (int i = 0; i < nums.size(); i++){
            if (diff.contains(target-nums[i])){
                if (i < diff[target-nums[i]].second) return {i,diff[target-nums[i]].second}; 
                return {diff[target-nums[i]].second, i};
            }
            diff[nums[i]] = {target-nums[i],i};
        }

        return{};
    }
};
