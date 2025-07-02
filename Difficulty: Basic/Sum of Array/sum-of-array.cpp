// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int sum(vector<int>& arr, int size){
        if(size==0){
            return 0;
        }
        return arr[size-1]+sum(arr,size-1);
        
    }
    int arraySum(vector<int>& arr) {
        return sum(arr, arr.size());
        // code here
        
    }
};