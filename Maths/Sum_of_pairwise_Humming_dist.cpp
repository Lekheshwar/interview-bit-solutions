int Solution::hammingDistance(const vector<int> &A) {
    int ans = 0;
    int mod = 1000000007;
    int n = A.size();
    for(int i = 0; i < 32; i++){
        long one = 0;
        for(auto x : A){
            if(x & (1<<i))one++;
        }
        ans += (2LL * one * (n - one)) % mod;
        ans %= mod;
    }
    return ans % mod;
}

