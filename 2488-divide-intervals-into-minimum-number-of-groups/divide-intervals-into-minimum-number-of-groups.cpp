class Solution {
public:
    int minGroups(vector<vector<int>>& v) {
        vector<int> start;
        vector<int> end;

        for(auto it : v){
            start.push_back(it[0]);
            end.push_back(it[1]);
        }

        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        int i=0,j=0;
        int ans=0,cnt=0;

        while(i<start.size()){
            if(start[i]<=end[j]){
                cnt++;
                i++;
            }
            else{
                cnt--;
                j++;
            }

            ans=max(ans,cnt);
        }

        return ans;
    }
};