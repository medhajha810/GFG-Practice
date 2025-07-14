// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        int Cmax=0;
        if(n==0){
            return 0;
        }
        if(n==1){
            return arr[0];
        }
        if(n==2){
            return max(arr[0],arr[1]);
        }
        vector<int> dp(n);
        dp[0]=arr[0];
        dp[1]=max(arr[0],arr[1]);
        for(int i=2;i<n;i++){
            dp[i]=std::max(dp[i-1],arr[i]+dp[i-2]);
            
        }
        return dp[n-1];
    }
};