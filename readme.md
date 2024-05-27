**Задача:**
**908.You are given an integer array nums and an integer k.**
**Решение:**
```cpp
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int minNum = *min_element(nums.begin(), nums.end());
int maxNum = *max_element(nums.begin(), nums.end());

int diff = maxNum - minNum - 2 * k;
return max(diff, 0);
    }
};
```
**Задача:**
**922.Given an array of integers nums, half of the integers in nums are odd, and the other half are even.**
**Решение:**
```cpp
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
```
**Задача:**
**1200.Given an array of distinct integers arr, find all pairs**
**Решение:**
```cpp
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
sort(arr.begin(), arr.end());
int minDiff = INT_MAX;

for (int i = 1; i < arr.size(); i++) {
minDiff = min(minDiff, arr[i] - arr[i - 1]);
}

for (int i = 1; i < arr.size(); i++) {
if (arr[i] - arr[i - 1] == minDiff) {
result.push_back({arr[i - 1], arr[i]});
}
}
return result;
    }
};
```