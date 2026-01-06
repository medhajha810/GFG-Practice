class Solution {
  public:
    int Sum(int n){
        int sum=0;
        while(n){
            int d =n%10;
            sum+=d*d;
            n/=10;
        }
        return sum;
        
    }
    bool isHappy(int n){
        if(n==1){
            return true;
        }
        if(n == 4) return false;
        return isHappy(Sum(n));
    }
    int nextHappy(int N) {
        // code here
        while(true){
        N++;
        if(isHappy(N)) return N;
    }
        
    }
};