class Solution {
public:
    bool isIsomorphic(string s, string t) {
       // This approach all test case didnt got cleared 
// unordered_map<char,int> M;

// for (char c : s){
//     M[c]++; 
//     }         // inserts c with value 0 the first time, then increments

//         unordered_map<char, int> N;
// for (char c : t){
//     N[c]++; 
//     }     
       
//         //  Return true only if both strings have the same
//         //    number of unique characters
//         return M.size() == N.size();
//     }

// proper sol

unordered_map<char,char> mp1;
unordered_map<char,char> mp2;
int m = s.length();
for(int i = 0 ; i<m ; i++){
    char ch1 = s[i];
    char ch2 = t[i];
    if(mp1.find(ch1)!=mp1.end()&& mp1[ch1]!=ch2 || mp2.find(ch2)!=mp2.end()&&mp2[ch2]!=ch1){
        return false;
    }
    mp1[ch1]=ch2;
    mp2[ch2]=ch1;
}

return true;
    }
};
