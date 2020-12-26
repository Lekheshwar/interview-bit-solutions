bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int, bool>> v;
    for(auto x : arrive)v.push_back({x, true});
    for(auto x : depart)v.push_back({x, false});
    sort(v.begin(), v.end());
    for(auto x : v){
        if(x.second == true)K--;
        else K++;
        if(K < 0)return false;
    }
    return true;
}

