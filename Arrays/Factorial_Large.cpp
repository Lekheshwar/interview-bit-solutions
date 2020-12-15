int  help(vector<int>& arr, int x, int n){
    if(n == 0){
        arr[0] = x;
        n++;
        return 1;
    }
    int carry = 0;
    for(int i = 0; i < n; i++){
        int k = arr[i] * x + carry;
        arr[i] = k % 10;
        carry = k / 10;
    }
    while(carry > 0){
        arr[n] = carry % 10;
        carry /= 10;
        n++;
    }
    return n;
    
}
string Solution::solve(int A) {
    vector<int> arr(160, 0);
    int n = 0;
    for(int i = 1; i <= A; i++)
        n = help(arr, i, n);
    
    string res = "";
    for(int i = 0; i < n; i++){
        res = to_string(arr[i]) + res;
    }
    return res;
    
}


