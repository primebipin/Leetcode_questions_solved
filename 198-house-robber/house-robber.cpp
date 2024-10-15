class Solution {
public:
    int solve(int b,int ind,vector<int> &v,vector<vector<int>> &dp){
        if(ind>=v.size()){
            return 0;
        }

        if(dp[ind][b]!=-1)return dp[ind][b];

        int notT = solve(0,ind+1,v,dp);

        int T = 0;
        if(b==0){
            T = v[ind]+solve(1,ind+1,v,dp);
        }

        return dp[ind][b]=max(T,notT);
    }


    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));

        return solve(0,0,nums,dp);


    }
};