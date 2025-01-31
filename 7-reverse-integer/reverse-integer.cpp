class Solution {
public:
    int reverse(int x) {
       int sol=0;
        while(x){
            if(sol>INT_MAX/10||sol<INT_MIN/10) return 0;
            int digit =x%10;
            sol=sol*10+digit;
            x/=10;
        }
        return sol;
    }
};