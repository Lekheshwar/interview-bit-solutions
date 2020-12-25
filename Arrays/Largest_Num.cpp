bool comp(int a, int b){
    string as = to_string(a);
    string bs = to_string(b);
    return (as + bs) > (bs + as);
}
string Solution::largestNumber(const vector<int> &A) {
    vector<int> B;
    for(auto x : A)B.push_back(x);
    sort(B.begin(), B.end(), comp);
    string s = "";
    for(auto val : B){
        s += to_string(val);
    }
    return s[0] == '0' ? "0" : s;
}

