vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> res;
    for(int i = 0; i < A; i++){
        vector<int> temp;
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i)temp.push_back(1);
            else temp.push_back(res[i-1][j] + res[i - 1][j - 1]);
        }
        res.push_back(temp);
    }
    return res;
}
