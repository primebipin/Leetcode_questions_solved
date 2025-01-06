class Solution {
public:
    vector<int> minOperations(string b) {
        vector<int> v;
        int c=0;
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b.size();j++){
                if(b[j]=='1' && i!=j){
                    c+=abs(i-j);
                    
                }
            }
            v.push_back(c);
            c=0;
        }
        return v;

    }
};