class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        int i = 0;

        // Cyclic sort
        while (i < n) {
            int correct = arr[i];
            if (correct >= 0 && correct < n && arr[i] != arr[correct]) {
                swap(arr[i], arr[correct]);
            } else {
                i++;
            }
        }

        // Find duplicates
        vector<int> nums;
        for (int j = 0; j < n; j++) {
            if (arr[j] != j) {
                if (nums.empty() || nums.back() != arr[j]) {
                    nums.push_back(arr[j]);
                }
            }
        }

        return nums;
    }
};
