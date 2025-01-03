class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        vector<long long> backsum(n);

        for(int i=0;i<n;i++){
            backsum[i]=sum;
            sum+=nums[i];
        }
            int ans=0;
        for(int i=1;i<n;i++){
          if(backsum[i]>=sum-backsum[i]){
            ans++;
          }      
        }

        return ans;
    }
};