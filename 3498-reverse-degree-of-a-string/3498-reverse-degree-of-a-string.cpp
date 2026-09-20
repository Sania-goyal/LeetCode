class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
       for(int i=0;i<s.length();i++)
       {
         int ch = s[i];
         int value = ('z'-ch+1)*(i+1);
         ans += value;
       }
       return ans; 
    }
};