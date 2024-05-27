class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
      vector<int> result(nums.size());
int evenIdx = 0, oddIdx = 1;

for(int num : nums) {
if(num % 2 == 0) {
result[evenIdx] = num;
evenIdx += 2;
} else {
result[oddIdx] = num;
oddIdx += 2;
}
}
return result;  
    }
};