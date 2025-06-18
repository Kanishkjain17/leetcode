class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
          sort(nums.begin(),nums.end());
          vector<vector<int>> result;
        for(int i = 0 ; i<nums.size() ; i += 3){
int a = nums[i];
int b = nums[i+1];
int c = nums[i+2];
if(c-a > k){
    // agar c-a sahi h (mtlb less than equal to k) to b-a to hoga hi kyuki apn ne sort kar diya hai
// agar nhi h to khali return kar do
return {};

}


    result.push_back({a,b,c});



        }
        return result;
    }
};