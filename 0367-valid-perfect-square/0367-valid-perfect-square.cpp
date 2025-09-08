class Solution {
public:
    bool isPerfectSquare(int num) {
       long long left=1 ;
        long long right=num;
        while(left<=right){
            long long mid=(right+left)/2;
            if(mid*mid==num) return true;
            else if(mid*mid>num){
                right=mid-1;
            }
            else {
                left=mid+1;
            }
                    }
                    return false;
    }
};