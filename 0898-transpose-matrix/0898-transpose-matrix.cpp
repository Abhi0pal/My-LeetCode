class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size(); //row
        int m=matrix[0].size(); //coloum

        vector<vector<int>> res(m,vector<int>(n));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[j][i]=matrix[i][j];
            }
        }
        return res;
    }
};