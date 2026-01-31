class Solution{
public:
    void solve(int idx, string &s, string temp, vector<string> &ans){
        if(idx == s.size()){
            if(temp.size() > 0) ans.push_back(temp); // avoid empty subsequence
            return;
        }
        
        // take
        solve(idx+1, s, temp + s[idx], ans);
        
        // not take
        solve(idx+1, s, temp, ans);
    }
    
    vector<string> AllPossibleStrings(string s) {
        vector<string> ans;
        solve(0, s, "", ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
