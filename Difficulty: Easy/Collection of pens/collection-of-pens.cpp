// User function Template for C++
class Solution {
  public:
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int minThirdPiles(int A, int B) {
        // code here
        int ans=A+B;
        if(ans==0){
            return 1;
        }
        int i=1;
        while(!isPrime(ans+i)){
            i++;
        }
        return i;
    }
};