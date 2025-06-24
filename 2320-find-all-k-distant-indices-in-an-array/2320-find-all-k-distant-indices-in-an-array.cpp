class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> temp;
        int n = nums.size();
        int start = 0;
        int end = 0;
        for(int j = 0 ; j<nums.size() ; j++){
            if(nums[j]==key){
                start = max(j-k,0);
               end = min(j+k,n-1);
                 
                 if(temp.size() > 0 &&temp.back()>= start){
                    start = temp.back() + 1;
                 }
           for(int i = start ; i<= end ; i++){
                    temp.push_back(i);
                 }     
        }

        }
         
       return temp; 
    }
};