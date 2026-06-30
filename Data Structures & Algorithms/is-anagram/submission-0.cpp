class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false; 
        unordered_map<char,int> letters;
        for (char l: s){
            letters[l]++;
        }

        for(char l: t){
            letters[l]--;
        }

        for(auto const& [key, value]: letters){
            if (value != 0) return false;
        }
        return true;
    }
};
