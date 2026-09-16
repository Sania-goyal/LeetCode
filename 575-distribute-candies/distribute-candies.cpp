class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>s;
        for(int i=0;i<candyType.size();i++)
        {
            s.insert(candyType[i]);
        }
        int m= s.size();
       int n = candyType.size()/2;
       int ans = min(n,m);
       return ans;     
    }
};