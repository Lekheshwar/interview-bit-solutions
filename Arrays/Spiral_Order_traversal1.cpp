vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int top = 0, bottom = A.size() - 1, right = A[0].size() - 1, left = 0;
    int dir = 0;
    vector<int> res;
    while(top <= bottom && left <= right){
        //Print L-----R
        if(dir == 0){
            for(int i = left; i <= right; i++){
                res.push_back(A[top][i]);
            }
            top++;
        }
        //Print T ---- B
        else if(dir == 1){
            for(int i = top; i <= bottom; i++)res.push_back(A[i][right]);
            right--;
        }
        //Print R --- L
        else if(dir == 2){
            for(int i = right; i >= left; i--)res.push_back(A[bottom][i]);
            bottom--;
        }
        
        //Print B ----T
        else if(dir == 3){
            for(int i = bottom; i >= top; i--)res.push_back(A[i][left]);
            left++;
        }
        dir = (dir + 1)% 4;
    }
    return res;
}

