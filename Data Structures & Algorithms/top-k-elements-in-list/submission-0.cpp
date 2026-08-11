class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (int num : nums){
            freq[num]++;
        }
        vector<pair<int,int>> arr;
        for (auto &[num, count] : freq){
            arr.push_back({num,count});
        }
        sort(arr.begin(), arr.end(), [](auto &a, auto &b){
            return a.second < b.second;
        });
        vector<int> ans;
        for (int i=arr.size()-k; i<arr.size(); i++){
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};
