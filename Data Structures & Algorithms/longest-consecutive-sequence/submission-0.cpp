class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> st(nums.begin(), nums.end());
        for (int num : st){
            if(st.find(num-1) == st.end()){
                int count = 1;
                int start = num;
                while (st.find(start+1) != st.end()){
                    count++;
                    start++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};
