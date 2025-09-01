class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 1;
        for (int n : nums) {
            if (n > 0 && n == count) {
                count++;
            } else if (n > count) {
                return count;
            }
        }

        return count;
    }
};