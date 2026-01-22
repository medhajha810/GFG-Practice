class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int>ans;
        int i=0;
        while (i < arr.size()){
            if(arr[i]!=i+1){
                if(arr[arr[i]-1]!=arr[i]){
                    swap(arr[i],arr[arr[i]-1]);
                }
                else{
                    i++;
                }
            }
            else{
                i++;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=i+1){
                ans.push_back(arr[i]);
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};