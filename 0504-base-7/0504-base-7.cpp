class Solution {
public:
    string convertToBase7(int num) {
    int n = num;
    if(n==0 ) return "0";
    bool negative= n< 0;
    string result = "";
    n= abs(n);
    while(n > 0)
    {
        result += char('0' + (n % 7));
        n = n / 7;
    }
    reverse(result.begin(), result.end());
    if(negative)
    result = "-" + result;
    return result;
    }
};