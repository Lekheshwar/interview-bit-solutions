// NOTE : TC O(n * loglog(n))

vector<int> Solution::sieve(int A) {
    vector<int> primes(A+1, 1);
    primes[0] = primes[1] = 0;
    for(int i = 2; i <= sqrt(A); i++){
        if(primes[i] == 1){
            for(int j = 2; i * j <= A; j++)
                primes[i * j] = 0;
        }
    }
    vector<int> res;
    for(int i = 2; i <= A; i++)
        if(primes[i])res.push_back(i);
        
    return res;
}

