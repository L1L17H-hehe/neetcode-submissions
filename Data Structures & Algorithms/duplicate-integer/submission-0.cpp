class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashmap; 
        for (int i: nums){
            hashmap[i]++;
            if (hashmap[i] > 1) return true;
        }
        return false;
    }
};