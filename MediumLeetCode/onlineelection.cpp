class TopVotedCandidate {
public:
    vector<pair<int,int>> candidates;
    TopVotedCandidate(vector<int>& person, vector<int>& times) {
        int maxCount=0,candidate=0,len=person.size();
        int count[len+1];
        memset(count,0,sizeof(count));
        candidates=vector<pair<int,int>>(len);
        for(int i=0;i<len;i++)
        {
            count[person[i]]++;
            if(count[person[i]]>=maxCount)
            {
                maxCount=count[person[i]];
                candidate=person[i];
            }
            candidates[i].first=times[i];
            candidates[i].second=candidate;
        }
    }
    
    int q(int t) {
       int start=0,high=candidates.size();
        while(start<high)
        {
         int   mid=(start+high)/2;
            if(candidates[mid].first<=t)
                start=mid+1;
            else
                high=mid;
        }
        return candidates[start-1].second;
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */