class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min = nums[0];
        int maxi = -1;
        for(int i = 1 ; i<nums.size();i++){
if(nums[i]>min){
    maxi = max(maxi,nums[i]-min);
}
else{
    min = nums[i];
}
        }
        return maxi;
    }
};