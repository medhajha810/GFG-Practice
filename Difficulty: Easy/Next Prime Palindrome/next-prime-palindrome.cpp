class Solution {
  public:
    
    bool isPalindrome(int n) {
        int rev = 0, temp = n;
        while(temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        return rev == n;
    }
    
    bool isPrime(int n) {
        if(n <= 1) return false;
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0)
                return false;
        }
        return true;
    }
    
    int PrimePalindrome(int N) {
        while(true) {
            if(isPalindrome(N) && isPrime(N))
                return N;
            N++;
        }
    }
};
