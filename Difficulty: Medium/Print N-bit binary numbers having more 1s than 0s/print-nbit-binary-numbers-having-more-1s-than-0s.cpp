// User function template for C++
class Solution {
  public:
    void solve(vector<string>&result, string ans, int one, int zero,int n){
        if(n==0){
            result.push_back(ans);
            return;
        }
        solve(result,ans+'1',one+1,zero,n-1);

        if(one>zero){
            solve(result,ans+'0',one,zero+1,n-1);
        }
    }
    vector<string> NBitBinary(int n) {
        // Your code goes here
        vector<string> result;
        solve(result,"",0,0,n);
        return result;
        
    }
};