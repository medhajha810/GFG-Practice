// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid]==target){
                return mid;
            }
            if(mid-1>=left && arr[mid-1]==target){
                return mid-1;
            }
            if(mid+1<=right && arr[mid+1]==target){
                return mid+1;
            }
            if(arr[mid]<target){
                left=mid+2;
            }
            if(arr[mid]>target){
                right=mid-2;
            }
        }
        return -1;
        
    }
};