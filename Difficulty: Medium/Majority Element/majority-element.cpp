class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        int candidate=0;
        int lead=0;
        for(int i=0;i<n;i++){
            if(lead==0){
                candidate=arr[i];
            }
            if(candidate==arr[i]){
                lead++;
            }
            else{
                lead--;
            }
        }
        int count = 0;
        for (int num : arr) {
            if (num == candidate) {
                count++;
            }
        }

        if (count > n / 2) {
            return candidate;
        } else {
            return -1;
        
        }
        
    }
};