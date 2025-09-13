class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        if(num<10) return num;
        while(num>9){
        int a=num/10;
        int b=num%10;
        ans=a+b;
        num=ans;
        }

         return ans;
    }
   
};