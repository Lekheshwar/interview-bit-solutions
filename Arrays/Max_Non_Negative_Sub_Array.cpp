vector<int> Solution::maxset(vector<int> &A) {
    long sum = 0;
    long msum = 0;
    vector<int> res, curr; 
    long  j = 0, n = A.size();
    while(j < n){
        if(A[j] < 0){
            if(sum > msum){
                res = curr;
                msum = sum;
            }
            else if(sum == msum && curr.size() > res.size()){
                res = curr;
            }
            curr.clear();
            sum = 0;
            j++;
        }
        else{
            sum += A[j];
            curr.push_back(A[j]);
            j++;
        }
    }
    if(sum > msum){
        return curr;
    }
    if(sum == msum){
       return curr.size() > res.size() ? curr : res;
    }
    return res; 
}

