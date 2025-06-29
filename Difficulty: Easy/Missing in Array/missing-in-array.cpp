class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        int i = 0;

        while (i < n) {
            int correct = arr[i] - 1;
            if (arr[i] >= 1 && arr[i] <= n && arr[i] != arr[correct]) {
                swap(arr[i], arr[correct]);
            } else {
                i++;
            }
        }

        for (int j = 0; j < n; j++) {
            if (arr[j] != j + 1) {
                return j + 1;
            }
        }

        return n + 1; // if all elements are correct, missing is n+1
    }
};
