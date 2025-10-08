class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n=potions.size();
        int i=0;
        int j=0;
        int res=0;
        vector<int> ans;
        while(i<spells.size()){
            if(spells[i]*potions[j]<success && j<potions.size()){
                j++;
            }
            else{
               ans.push_back(n-j);
               i++;
               j=0;
             
            }
            
        }
        return ans;
    }
};