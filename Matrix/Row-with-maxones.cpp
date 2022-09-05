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
