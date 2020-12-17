vector<int> Solution::plusOne(vector<int> &A) {
    int curr = A.size() - 1;
    vector<int> res;
    int carry = 0;
    while(curr >= 0){
        if(A[curr] == 9){
            carry = 1;
            A[curr] = 0;
            curr--;
        }
        else{
            A[curr]++;
            carry = 0;
            break;
        }
    }
    if(carry == 1 && curr < 0){
        res.push_back(1);
        for(int i = 0; i < A.size(); i++)res.push_back(A[i]);
        return res;
    }
    int st = 0;
    while(A[st] == 0){
        st++;
        continue;
    }
    return vector<int> (A.begin() + st, A.end());
}

