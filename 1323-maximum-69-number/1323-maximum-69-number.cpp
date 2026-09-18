class Solution {
public:
    int maximum69Number (int num) {
        int n = num;
      vector<int>v;
      while(n>0)
      {
        v.push_back(n%10);
        n = n/10;
      } 
      reverse(v.begin(), v.end());
      for(int i=0;i<v.size();i++)
      {
        if(v[i]==9){
            continue;
        }
        else
        {
            v[i]=9;
            break;
        }
      }
      int nu=0;
      for (int digit : v) {
        nu = nu * 10 + digit;
    } 
    return nu;
    }
};