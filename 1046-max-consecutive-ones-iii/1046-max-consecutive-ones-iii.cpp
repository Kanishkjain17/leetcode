class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int maxi = 0;
        int n = nums.size();
        int zeroes = 0;
        while(r<n){
if(nums[r] == 0){
    zeroes++;

}
if(zeroes > k ){
    if(nums[l]==0){
        zeroes--;
    }
    l++;
}
if(zeroes <= k){
    int len = r - l + 1;
    maxi = max(maxi,len);
}
r++;
        }
        return maxi;
        
    }
};