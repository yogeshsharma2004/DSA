class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int> mp;

        for(char c : s){
            mp[c]++;
        }
        int count1=0;
        int count2=0;
     for(auto it: mp){
            if(it.second%2==0)
            count1+=it.second;
            if(it.second%2!=0){
                count2=1;
                count1+=(it.second-1);
            }
     }
     return count1+count2;
    }
};