class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n= arr.size();
        vector<int> res(n, -1);
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top() <=arr[i]){
                s.pop();
            }
            if(!s.empty()){
                res[i]=s.top();
            }
            s.push(arr[i]);
        }
        return res;
    }
};