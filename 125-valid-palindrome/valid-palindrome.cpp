class Solution {
public:
    bool isPalindrome(string s) {
       for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
      }
        string s1;
        for(int i=0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122 || s[i] >= '0' && s[i] <= '9')
        {
            s1 +=s[i];
        }
        }
        for(int i=0;i<s1.length()/2;i++)
        {
            if(s1[i]!=s1[s1.length()-i-1])
           {
            return false;
           }
        }
        return true;
    }
};