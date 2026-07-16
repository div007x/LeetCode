class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;

        int m= accounts.size();
        int n= accounts[0].size();

        for(int i=0;i<m;i++ ){
            int rowsum=0;
            for(int j=0;j<n;j++){
                rowsum+=accounts[i][j];
            }
            maxWealth= max(maxWealth,rowsum);
        }
        return maxWealth;
        
    }
};