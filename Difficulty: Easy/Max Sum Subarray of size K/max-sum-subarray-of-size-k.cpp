class Solution {
  public:
    int maxSubarraySum(vector<int>& arr,int& k) {
        int n=arr.size();
        if (k > n) return -1;
    
        int windowSum = 0;
    
        // sum of first window
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
    
        int maxSum = windowSum;
    
        // slide the window
        for (int i = k; i < n; i++) {
            windowSum += arr[i];      // add next element
            windowSum -= arr[i - k];  // remove previous element
    
            maxSum = max(maxSum, windowSum);
        }
    
        return maxSum;
    }

};