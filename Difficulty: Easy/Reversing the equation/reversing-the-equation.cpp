class Solution {
  public:
    string reverseEqn(string s) {
        // code here.
        string res ="";
        int n = s.length();
        int i =n-1;
        while(i>=0)
        {
            string temp ="";
            while(i>=0 && isdigit(s[i]))
            {
                temp += s[i];
                --i;
            }
            reverse(temp.begin(), temp.end());
            res += temp;
            if(i >=0 && !isdigit(s[i]))
            {
                res += s[i];
                --i;
            }
        }
        return res;
    }
};