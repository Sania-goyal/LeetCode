class Solution {
public:
    int reverse(int x) {
        int temp;
      long long a =0;
      while(x!=0){
        temp= x%10;
        a=(a*10)+temp;
        x /= 10;
      } 
      if (a > INT_MAX || a < INT_MIN)
      return 0;
      return a; 
    }
};