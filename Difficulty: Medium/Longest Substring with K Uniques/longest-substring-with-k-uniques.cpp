class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int i=0;
        int freq[256]={0};
        int count=0;
        int maxLen=-1;
        for(int j=0;j<s.size();j++){
            if(freq[s[j]]==0){
                count++;
            }
            freq[s[j]]++;
            while(count>k){
                freq[s[i]]--;
                if(freq[s[i]]==0){
                    count--;
                }
                i++;
            }
            if(count==k){
                maxLen=max(maxLen, j-i+1);
            }
        }
        return maxLen;
    }
};