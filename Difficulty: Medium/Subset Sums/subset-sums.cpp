class Solution {
  public:
    void func(vector<int>& arr, vector<int>& result, int index, int curr){
        if(index==arr.size()){
            result.push_back(curr);
            return;
        }
        //include.
        func(arr, result, index+1, curr+arr[index]);
        
        //exclude.
        func(arr, result, index+1, curr);

        
        
    }
  public:
    vector<int> subsetSums(vector<int>& arr) {
        vector<int> result;
        func(arr, result, 0,0);
        return result;
    }
};