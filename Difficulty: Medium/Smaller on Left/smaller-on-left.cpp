class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        int n= arr.size();
        stack<int> s;
        vector<int> res(n,-1);
        for(int i=0;i<n;i++){
            while(!s.empty() && s.top()>=arr[i]){
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