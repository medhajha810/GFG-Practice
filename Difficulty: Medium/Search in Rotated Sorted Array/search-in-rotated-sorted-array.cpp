class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int n=arr.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==key){
                return mid;
            }
            if(arr[l]<=arr[mid]){
                if(arr[l]<=key && arr[mid]>key){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                    
                }
            }
            else{
                if(arr[h]>=key && arr[mid]<key){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return -1;
    }
};