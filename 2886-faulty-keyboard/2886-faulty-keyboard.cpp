class Solution {
public:
    string finalString(string s) {
        int startindex = 0;
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]=='i'){
                startindex = i;
                reverse(s.begin(),s.begin()+startindex);
                s.erase(i,1);
                i = 0;
                
            }
            
        }
      return s;  
    }
};