class Solution {
public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    int maxFreqSum(string s) {
        unordered_map<char, int> mp;
        for (auto i : s) {
            mp[i]++;
        }
        int maxVowelFreq = 0, maxConsonantFreq = 0;

        for (auto& p : mp) {
            if (isVowel(p.first)) {
                maxVowelFreq = max(maxVowelFreq, p.second);
            } else {
                maxConsonantFreq = max(maxConsonantFreq, p.second);
            }
        }

        return maxVowelFreq + maxConsonantFreq;
    
}
};