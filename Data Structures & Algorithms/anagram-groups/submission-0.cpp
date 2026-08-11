class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> str;
        for (string word : strs){
            string key = word;
            sort(key.begin(), key.end());
            str[key].push_back(word);
        }
        vector<vector<string>> ans;
        for (auto &[key, words] : str){
            ans.push_back(words);
        }
        return ans;
    }
};
