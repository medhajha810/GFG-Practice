class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        unordered_map<int, int>SumCount;
        SumCount[0]=1;
        int sum=0, count=0;

        for (int num : arr) {
            sum+=num;
            if (SumCount.find(sum - 0) != SumCount.end()){
                count+=SumCount[sum-0];
            }

            SumCount[sum]++;
        }

        if(count>0){
            return true;
        }
        else{
            return false;
        }
    }
};