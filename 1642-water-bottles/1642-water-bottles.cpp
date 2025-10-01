class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
      int drinked = 0, rem = 0;
        while (numBottles > 0) {
            drinked += numBottles;
            rem += numBottles;
            numBottles = rem / numExchange;
            rem = rem % numExchange;
        }
        return drinked;
        
    }
};