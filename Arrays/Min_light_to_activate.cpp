int Solution::solve(vector<int> &A, int B) {
    int left = 0;
    int cnt = 0;
    int n = A.size();
    int right = min(right = B - 1, n - 1);
    while(right < n){
        while(right >= left - B + 1){
            if(right < 0)return -1;
            if(A[right] == 1){
                break;
            }
            right--;
        }
        if(right < left - B + 1)return -1;
        cnt++;
        left = right + B;
        if(left >= n)break;
        right = min(left + B - 1, n-1);
    }
    return cnt;
}

