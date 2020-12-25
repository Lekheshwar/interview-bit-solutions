// NOTE: Straight forward Sorting tech also exists.
// Following algo provides O(n) TC



vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    int i = 0;
    int n = intervals.size();
    int x = newInterval.start;
    int y = newInterval.end;
    vector<Interval>  res;
    
    if(x > y){ // check if the given pair is sorted or not
        int t = x;
        x = y;
        y = t;
    }
    
    if(n == 0){ // Edge Case 1 : if the array is empty
        res.push_back(Interval(x,y));
        return res;
    }
    
    while(i < n){ // find the potntial candidater to be merged
        if(intervals[i].end >= x)break;
        i++;
    }
    
    if(i == 0 && intervals[0].start > y && intervals[0].end> y){ // Edge Case 2 : if out new interval lies entiry to the left of the git arrya[NO OVERLAPPING]
        res.push_back(Interval(x, y));
        for(int it = 0; it < n; it++)res.push_back(intervals[it]);
        return res;
    }
    
    int j = i;
    while(j < n){
        if(intervals[j].start > y)break;
        j++;
    }
    
    if(i == j && y < intervals[j].start && x > intervals[i - 1].end){	// Edge Case 3 : new Interval lies in between two pair of interval [NON OVERLAPPING]
        for(int it = 0; it < i; it++)res.push_back(intervals[it]);
        res.push_back(Interval(x, y));
        for(int it = i; it < n; it++)res.push_back(intervals[it]);
        return res;
    }
    
    j--;
    for(int it = 0; it< n; it++){
        if(it == i){
            res.push_back(Interval(min(x, intervals[i].start), max(y, intervals[j].end)));
            it = j;
        }
        else{
            res.push_back(intervals[it]);
        }
    }
    
    if(i == n){ // Edge Case 4 : new interval lies on the extreme right.  NON OVERLAPPING
        res.push_back(Interval(x,y));
    }
    return res;
}
