class Solution {
public:


    int solve(vector<vector<int>> &mat,int i,int j,vector<vector<int>> &dp){
        if(i>=mat.size() || j>=mat[0].size() || mat[i][j]==0)return 0;


        if(dp[i][j]!=-1)return dp[i][j];

        int right = solve(mat,i,j+1,dp);
        int diagonal = solve(mat,i+1,j+1,dp);
        int down = solve(mat,i+1,j,dp);

        return dp[i][j] = 1+ min(right,min(diagonal,down));

    }


    int countSquares(vector<vector<int>>& matrix) {
        int ans=0;

        vector<vector<int>> dp(matrix.size()+1,vector<int>(matrix[0].size()+1,-1));

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==1)
                     ans+=solve(matrix,i,j,dp);
            }
        }
       
        return ans;
    }
};