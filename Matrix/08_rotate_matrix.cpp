// int rot[N][N];
		
// 		//Rotating the matrix using buffer
// 		for(int i = 0; i<N; i++){
// 		    for(int j = 0; j<N; j++){
// 		        rot[i][j] = arr[j][N-i-1];

// 		    }
// 		}
// with extra space logic 

class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& matrix, int n) {
	    // code here 
	     for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
	}

};
Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(1)
