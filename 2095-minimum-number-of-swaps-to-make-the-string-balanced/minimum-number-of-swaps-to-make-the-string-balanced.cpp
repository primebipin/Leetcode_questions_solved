class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }

        int ans = st.size();
        return (ans+1)/2;
    }
};