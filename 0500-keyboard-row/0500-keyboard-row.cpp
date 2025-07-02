class Solution {
public:
bool check(char c , string s){
    for(auto i : s){
        if(i == c) return true;
    }
    return false;
}
    vector<string> findWords(vector<string>& words) {
       vector<string> mp = {"qwertyuiop","asdfghjkl","zxcvbnm"};
       vector<string> ans;
       int n = words.size();
       // going to traverse every word
       for(int i = 0 ; i<n ; i++){
        // traversing in map that to check whether a word can be formed from a single row or not , like we have 3 rows so we will check like this mp[j]
        for(int j = 0 ; j<3 ; j++){
            bool found = true;
            for(int k = 0 ; k<words[i].size(); k++){
                // here converting uppercase letter into lower as  we can treat them same 
                // sending them to check function which will return true or false
                // in check we will see iif a word can be created from a single row or not 
                // if a word cannot be created from any of 3 row that means some characteer in word are in one row and other row , hence return false 
                // here in if we have written if check is false
                if(!check(tolower(words[i][k]),mp[j])){
                    found = false;
                }
            }
            if(found){
                ans.push_back(words[i]);
                break;
            }
        }

       }
       return ans;
    }
};