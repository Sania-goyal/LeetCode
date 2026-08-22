class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int p = 1;
        int  num = n;
        while(num>0)
        {
            int temp= num%10;
            sum = sum + temp;
            p = p*temp;
            num = num/10;
        }
        if(n%(sum+p)==0)
        {
            return true;
        }
        return false;
    }
};