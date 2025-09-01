class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, int index) {
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        unordered_set<int> st; 
        for (int j = index; j < nums.size(); j++) {
            if (st.count(nums[j])) continue; 

            st.insert(nums[j]);
            swap(nums[index], nums[j]);
            solve(nums, ans, index + 1);
            swap(nums[index], nums[j]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); 
        solve(nums, ans, 0);
        return ans;
    }
};
