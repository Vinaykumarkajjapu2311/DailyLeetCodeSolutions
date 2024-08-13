class SummaryRanges {
public:
    set<int>nums;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        nums.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>>res;
        int start=-1,end=-1;
        for(auto it:nums)
        {
            if(start==-1)
            {
                start=it;
                end=it;
            }
            else if(it==end+1)
            {
                end=it;
            }
            else 
            {
                res.push_back({start,end});
                start=it;
                end=it;
            }
        }
        if(start!=-1)
        {
            res.push_back({start,end});
        }
        return res;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */