class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int n = gas.size();
        int total_cost = 0; 
        int ans_index = 0;
        int start = 0;
        
        for(int i = 0; i < n; i++){
            total_cost += gas[i] - cost[i];
           ans_index += gas[i] - cost[i];
            if(ans_index < 0){ 
                ans_index = 0; 
                start = i + 1; 
            }
        }
        return (total_cost < 0) ? -1 : start;
    }
};