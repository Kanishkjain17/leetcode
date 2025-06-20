class Solution {
public:
    int maxDistance(string s, int k) {
        int maxmd = 0;
        int count_n = 0;
        int count_e = 0;
        int count_s = 0;
        int count_w = 0;
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]=='N'){
                count_n ++;
            }
            else if(s[i]=='S'){
                count_s ++;
            }
             else if(s[i]=='E'){
                count_e ++;
            }
             else if(s[i]=='W'){
                count_w ++;
            }
        
        int md = abs(count_w - count_e) + abs(count_s - count_n);
        int steps = i+1;
        int wasted = steps - md;
        int extra = 0;
        if(wasted!=0){
            // it means there is a waste in step
            extra = min(2*k,wasted);
        }
        md = md + extra;
        maxmd = max(md,maxmd);
        }
        return maxmd;
    }
};