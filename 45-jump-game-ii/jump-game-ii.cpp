class Solution {
public:


    int solve(int ind,vector<int> &v,vector<int> &dp){
        if(ind==v.size()-1)return 0;

        if(dp[ind]!=-1)return dp[ind];
        int ans=1e6;

         for (int i = 1; i <= v[ind]; i++) {
            if (ind + i < v.size()) {
                ans = min(ans, 1 + solve(ind + i, v,dp));
            }
        }
        return dp[ind] = ans;
    }


    int jump(vector<int>& nums) {
    int n=nums.size();
    // vector<int> dp(n+1,-1);

    // return solve(0,nums,dp);

    vector<int> dp(n,1e9);
    dp[0]=0;

    for(int i=0;i<n;i++){
        for(int j=1;j<=nums[i];j++){
            if (j + i < nums.size()) {
                dp[i+j] = min(dp[i+j],dp[i]+1);
            }
        }
    }

        return dp[n-1];

    }
};