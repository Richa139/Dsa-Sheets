class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};

// t.c=O(n*m)
//   s.c=O(1)




// optimized t.c=O(n+m) , s.c=O(1)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int i=0;
     int n=matrix.size();
     int m=matrix[i].size();
     int j=m-1;
     while(i<n and j>=0 ){
         if(matrix[i][j]==target){
             return true;
         }
         else if(matrix[i][j]<target){
             i++;
         }
         else{
             j--;
         }
     }
        return false;
    }
};
