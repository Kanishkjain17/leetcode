class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
         int diff = 0;
         int n = nums.size();
        for(int i = 0 ; i< nums.size()-1 ; i++){
           diff = max(diff,abs(nums[i+1]-nums[i]));
           cout<<diff<<endl;
           diff = max(diff , abs(nums[n-1]-nums[0]));
            cout<<diff<<endl;

        }
      return diff;  
    }
};