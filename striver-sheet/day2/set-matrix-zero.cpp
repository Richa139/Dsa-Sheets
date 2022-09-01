class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>rowl(n,1);
        vector<int>coll(m,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rowl[i]=0;
                    coll[j]=0;
                }
            }  
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rowl[i]==0 or coll[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
// t.c=O(n2)
// sc=O(n2)


// 2nd sol
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowsize=matrix.size();
        int colsize=matrix[0].size();
        bool iscol=false;
        for(int i=0;i<rowsize;i++){
            if(matrix[i][0]==0){
                iscol=true;
            }
            for(int j=1;j<colsize;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;           
                }
            }
        }
        for(int i=1;i<rowsize;i++){
            for(int j=1;j<colsize;j++){
                if(matrix[i][0]==0 or matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int i=0;i<colsize;i++){
                matrix[0][i]=0;
            }
        }
        if(iscol){
            for(int i=0;i<rowsize;i++){
                matrix[i][0]=0;
            }
        }
        
    }
};
s.c=O(1)
