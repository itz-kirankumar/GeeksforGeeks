class Solution {
  public:
    bool isPrime(int x){
        if(x <= 1)
            return false;
        for(int i = 2; i <= sqrt(x); i++){
            if(x%i == 0)
                return false;
        }
        return true;
    }
    vector<int> leastPrimeFactor(int n) {
        vector<int> ans(n+1, 2);
        ans[1] = 1;
        for(int i = 3; i<n+1; i+=2){
            if( isPrime(i) )
                ans[i] = i;
            else{
                for(int j = 2; j<i; j++){
                    if(i % j == 0){
                        ans[i] = j;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};