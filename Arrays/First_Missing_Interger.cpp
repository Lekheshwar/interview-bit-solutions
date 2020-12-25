int Solution::firstMissingPositive(vector<int> &A) {
    int i = 0; 
    int n = A.size();
    while(i < n){
        while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i]){
            swap(A[A[i] - 1],A[i]);
        }
        i++;
    }
    for(int i = 0; i < n; i++){
        if(A[i] != i + 1)return i + 1;
    }
    return n + 1;
}
