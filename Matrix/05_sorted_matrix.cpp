class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        vector<int>ans;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                ans.push_back(mat[i][j]);
            }
        }
        int index=0;
        sort(ans.begin(),ans.end());
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                mat[i][j]=ans[index++];
            }
        }
        return mat;
    }
};

Expected Time Complexity:O(N2LogN)
Expected Auxillary Space:O(N2)
