class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size()); 
        vector<int> prefix(nums.size()); 
        vector<int> suffix(nums.size());

        //prefix part
        for (int i = 0; i < nums.size(); i++){
            if (i == 0) prefix[i] = 1;
            else prefix[i] = prefix[i-1]*nums[i-1];
        }

        //suffix part
        for (int i = nums.size()-1; i >= 0; i--){
            if (i == nums.size()-1) suffix[i] = 1; 
            else suffix[i] = suffix[i+1]*nums[i+1];
        }

        for (int i = 0; i < nums.size(); i++){
            result[i] = prefix[i]*suffix[i]; 
        }

        return result;
    }
};
