class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int start = 0, end = 0, sum = 0;
        int n = arr.size();

        while (end <= n) {
            if (sum < target && end < n) {
                sum += arr[end];
                end++;
            }
            else if (sum > target) {
                sum -= arr[start];
                start++;
            }
            else if (sum == target) {
                return {start + 1, end};  // 1-based index
            }
            else {
                break;
            }
        }

        return {-1};
    }
};
