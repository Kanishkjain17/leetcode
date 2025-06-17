class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      unordered_map<int, int> baskets;
        int left = 0, max_length = 0;

        for (int right = 0; right < fruits.size(); ++right) {
            int rightfruit = fruits[right];
            baskets[rightfruit]++;

            while (baskets.size() > 2) {
                int leftfruit = fruits[left];
                baskets[leftfruit]--;
                if (baskets[leftfruit] == 0) {
                    baskets.erase(leftfruit);
                }
                left++;
            }

            max_length = max(max_length, right - left + 1);
        }
return max_length;  
    }
};