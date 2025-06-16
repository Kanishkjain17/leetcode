class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    int min = prices[0];
        int maxi = 0;
        for(int i = 1 ; i<prices.size();i++){
if(prices[i]>min){
    maxi = max(maxi,prices[i]-min);
}
else{
    min = prices[i];
}
        }
        return maxi;
    }
};