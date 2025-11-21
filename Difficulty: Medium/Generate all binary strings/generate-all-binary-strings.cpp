class Solution {
  public:
    void generate(int idx, string& s, vector<string>& res){
        if(idx==s.size()){
            res.push_back(s);
            return;
        }
        s[idx]='0';
        generate(idx+1,s,res);
        s[idx]='1';
        generate(idx+1,s,res);
        
    }
    vector<string> binstr(int n) {
        // code here
        vector<string> res;
        string s(n,'\0');
        generate(0,s,res);
        return res;
    }
};