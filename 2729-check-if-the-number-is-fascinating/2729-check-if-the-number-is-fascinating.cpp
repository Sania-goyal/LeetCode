class Solution {
public:
    bool isFascinating(int n) {
      int n1 = n * 2;
        int n2 = n * 3;

        string s = to_string(n) + to_string(n1) + to_string(n2);

        if (s.length() != 9)
            return false;

        vector<int> v;

        for(char c : s)
        {
            if(c == '0')
                return false;

            v.push_back(c - '0');
        }

        sort(v.begin(), v.end());

        for(int i = 1; i <= 9; i++)
        {
            if(v[i - 1] != i)
                return false;
        }

        return true;
    }
};