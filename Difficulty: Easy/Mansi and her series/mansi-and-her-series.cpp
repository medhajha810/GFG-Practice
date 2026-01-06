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
    int nthTerm(int n) {
        // code here
        int count=0;
        int i=1;
        while(count!=n){
            i++;
            if(isPrime(i)){
                count++;
            }
        }
        return (i+1)*n;

    }
};