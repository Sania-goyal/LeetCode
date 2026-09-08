class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        int num = n;
        while(num>0)
        {
            num=num/10;
            count++;
        }
        if(count<4)
        {
            return 0;
        }
        return n-1000 + 1;
    }
};