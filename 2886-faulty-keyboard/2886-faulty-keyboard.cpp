class Solution {
public:
    string finalString(string s) {
        string result = "";
        
        for(char c : s) {
            if(c == 'i') {
                // Reverse the current result
                reverse(result.begin(), result.end());
            } else {
                // Add the character to result
                result += c;
            }
        }
        
        return result;
    }
};