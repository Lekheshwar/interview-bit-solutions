// TC : O(NLogN)


int Solution::solve(vector<int> &A) {
   vector<int> suff(A.size());
   suff[A.size() - 1] = A[A.size() - 1];
   for(int i = A.size() - 2; i >= 0; i--){
       suff[i] = max(suff[i + 1], A[i]);
   }
    set<int> s;
    s.insert(A[0]);
    int ans = INT_MIN;
    for(int i = 1; i < A.size() - 1; i++){
        s.insert(A[i]);
        if(A[i] >= suff[i + 1]) continue;
        auto it = s.find(A[i]);
        if(it == s.begin())continue;
        it--;
        ans = max(ans, *(it) + A[i] + suff[i + 1]);
    }
   return ans;
}

