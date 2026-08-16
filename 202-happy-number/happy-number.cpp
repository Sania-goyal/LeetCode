class Solution {
public:
    bool isHappy(int n){
        int num=n;
        unordered_set<int> seen;
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int add =0;
            while(n>0)
            {
               int digit = n%10;
               add = add+ (digit*digit);
               n = n/10; 
            }
            num= n;
            n = add;
        }
        if(n==1) return true;
        return false;
    }
};