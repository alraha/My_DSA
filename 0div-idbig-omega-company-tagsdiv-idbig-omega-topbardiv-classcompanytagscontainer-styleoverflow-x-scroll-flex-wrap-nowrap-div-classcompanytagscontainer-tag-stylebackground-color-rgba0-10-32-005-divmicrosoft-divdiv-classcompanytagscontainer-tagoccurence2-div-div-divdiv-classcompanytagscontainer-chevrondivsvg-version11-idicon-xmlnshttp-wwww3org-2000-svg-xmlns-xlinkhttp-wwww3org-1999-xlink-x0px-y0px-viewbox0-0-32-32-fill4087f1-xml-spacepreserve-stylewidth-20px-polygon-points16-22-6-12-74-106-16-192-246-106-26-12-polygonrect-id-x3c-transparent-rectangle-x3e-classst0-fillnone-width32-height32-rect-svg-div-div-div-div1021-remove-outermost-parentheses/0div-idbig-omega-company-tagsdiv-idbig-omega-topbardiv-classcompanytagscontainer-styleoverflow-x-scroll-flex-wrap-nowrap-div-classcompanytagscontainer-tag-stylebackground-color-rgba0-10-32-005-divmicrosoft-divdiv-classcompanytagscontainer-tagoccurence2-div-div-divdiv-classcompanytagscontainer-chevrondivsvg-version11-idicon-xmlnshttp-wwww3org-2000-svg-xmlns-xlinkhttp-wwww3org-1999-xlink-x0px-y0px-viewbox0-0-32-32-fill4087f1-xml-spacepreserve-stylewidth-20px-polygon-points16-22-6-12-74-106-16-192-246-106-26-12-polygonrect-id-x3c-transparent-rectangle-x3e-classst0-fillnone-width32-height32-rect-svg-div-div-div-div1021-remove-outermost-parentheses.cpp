class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int openCount = 0;
    int closeCount = 0;
    string result = "";
    int start = 0;
 
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '(') {
            openCount++;
        } else if (c == ')') {
            closeCount++;
        }
 
        if (openCount == closeCount) {
            result += s.substr(start+1, i-start-1);
            start = i+1;
        }
    }
    // return the output string(result)
    return result;
        
    }
};