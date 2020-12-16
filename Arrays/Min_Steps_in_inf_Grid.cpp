int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int steps = 0;
    for(int i = 1; i < n; i++){
        steps += max(abs(A[i - 1] - A[i]), abs(B[i - 1] - B[i]));
    }
    return steps;
}

