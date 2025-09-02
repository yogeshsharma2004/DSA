class Solution {
public:
    static bool cmp(const string &a, const string &b) {
        return a + b > b + a; 
    }

    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for (int n : nums) 
            arr.push_back(to_string(n));

        sort(arr.begin(), arr.end(), cmp);

        if (arr[0] == "0") return "0";
        
        string ans;
        for (auto &s : arr) ans += s;
        return ans;
    }
};