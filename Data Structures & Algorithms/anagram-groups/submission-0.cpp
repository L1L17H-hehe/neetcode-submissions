class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<string> temp; 
        vector<bool> visited(strs.size(), false);

        for (int i = 0; i < strs.size(); i++){
            if (visited[i]) continue;
            string s = strs[i];
            temp.push_back(s);
            visited[i] = true;
            sort(s.begin(), s.end());
            for (int j = 0; j < strs.size(); j++){
                if (visited[j]) continue; 
                string k = strs[j];
                sort(k.begin(), k.end()); 
                if (s == k){
                    temp.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            result.push_back(temp); 
            temp.clear();
        }

        return result;
    }
};
