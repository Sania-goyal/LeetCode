class Solution {
public:
    string capitalizeTitle(string title) {
        string s;
        int count = 0;
        for(int i=0;i<=title.length();i++)
        {
            if(title[i]!=' ' && i<title.length())
            {
                s += title[i];
                count++;
            }
            else
            {
                if(count==1 || count == 2)
                {
                    for(int k =  s.length() - count; k < s.length(); k++) {
                     s[k] = tolower(s[k]);
                    }
                }
                else{
                    s[s.length() - count]= toupper(s[s.length() - count]);
                   for(int k = s.length() - count + 1; k < s.length(); k++) {
                    s[k] = tolower(s[k]);
                    } 
                }
               if (i < title.length())
                    s += ' ';

                count = 0;
            }
        }
        return s;
    }
};