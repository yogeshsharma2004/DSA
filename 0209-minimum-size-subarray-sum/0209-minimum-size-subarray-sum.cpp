class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int minLen = INT_MAX;
        int left = 0;
        int Sum = 0;

        for (int right = 0; right < nums.size(); right++) {
            Sum += nums[right];

            while (Sum >= target) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                }
                Sum -= nums[left];
                left++;
            }
        }

        return minLen != INT_MAX ? minLen : 0;
    }
};