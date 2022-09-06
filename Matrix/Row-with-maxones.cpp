class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans[n];
	    for(int i=0;i<n;i++){
	        int cnt=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j])
	            cnt++;
	        }
	        ans[i]=cnt;
	    }
	    int sol=0;
	    int index=-1;
	    for(int i=0;i<n;i++){
	        if(sol<ans[i]){
	          sol=ans[i];
	          index=i;
	       }
	    }
	    return index;
	}

};

// optimized 
// Expected Time Complexity: O(N+M)
// Expected Auxiliary Space: O(1)
class Solution{
public:
	int rowWithMax1s(vector<vector<int>> arr, int n, int m) {
	    // code here
	    int i=0;
	    int j=m-1;
	    int index=-1;
	    int mxcnt=0;
	    while(i<n and j>=0){
	        if(arr[i][j]==1){
	           index=i;
	           j--;
	        }
	        else{
	            i++;
	        }
	    }
	    return index;
	}

};
