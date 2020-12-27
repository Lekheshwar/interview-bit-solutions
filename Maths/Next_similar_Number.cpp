string Solution::solve(string A) {
    int idx = A.size() - 1;
    int n = idx + 1;
    while(idx - 1 >= 0 && A[idx - 1] >= A[idx]){
        idx--;
    }
    if(idx == 0){
        if(A[idx] >= A[idx + 1])return "-1";
    }
    idx--;
    int k = n - 1;
    while(k > idx){
        if(A[k] > A[idx]){
            swap(A[k], A[idx]);
            sort(A.begin() + idx + 1, A.end());
        }
        k--;
    }
    return A;
}

