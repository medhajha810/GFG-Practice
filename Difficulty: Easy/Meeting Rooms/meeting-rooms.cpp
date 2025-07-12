// User function Template for C++
class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Step 1: Sort the meetings by their starting time
        sort(arr.begin(), arr.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0];
        });

        // Step 2: Check if any two meetings overlap
        for (int i = 1; i < arr.size(); i++) {
            // If current meeting starts before previous meeting ends
            if (arr[i][0] < arr[i - 1][1]) {
                return false; // Overlap found
            }
        }

        // No overlapping meetings
        return true;
    }
};
