class Solution {
  public:
    string caseSort(string& s) {
        // code here
        int n=s.length();
        vector<char> upper, lower;
        for(char c:s){
            if(islower(c)) lower.push_back(c);
            else upper.push_back(c);
        }
        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());
        
        int lowerindex=0, upperindex=0;
        for(int i=0;i<n;i++){
            if(islower(s[i])) s[i]=lower[lowerindex++];
            else s[i]=upper[upperindex++];
        }
        return s;
    }
};