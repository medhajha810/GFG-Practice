class Solution {
  public:
    void solve(vector<int>vec, int k, int idx, int& ans){
        if(vec.size()==1){
            ans=vec[0];
            return;
        }
        idx=(idx+(k-1))%vec.size();
        vec.erase(vec.begin()+idx);
        solve(vec,k,idx,ans);
    }
    int josephus(int n, int k) {
        // code here
        /*if(n==1){
            return 1;
        }
        else{
            return (josephus(n - 1, k) + k - 1) % n + 1;
        }*/
        vector<int>vec;
        for(int i=1;i<=n;i++){
            vec.push_back(i);
        }
        int ans=0;
        solve(vec,k,0,ans);
        return ans;
    }
};