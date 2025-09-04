class Solution {
public:
    int findClosest(int x, int y, int z) {
        int cnt1=abs(z-x);
        int cnt2=abs(z-y);

        if(cnt1>cnt2) return 2;
        if(cnt2>cnt1) return 1;
        return 0;
    }
};