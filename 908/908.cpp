class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int minNum = *min_element(nums.begin(), nums.end());
int maxNum = *max_element(nums.begin(), nums.end());

int diff = maxNum - minNum - 2 * k;
return max(diff, 0);
    }
};