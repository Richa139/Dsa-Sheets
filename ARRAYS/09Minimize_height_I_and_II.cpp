// Time Complexity: O(N*logN)
// Auxiliary Space: O(N)
// Minimize the height I
class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        int mi,ma;
        sort(arr,arr+n);
       int ans = arr[n-1]-arr[0];
       int smallest=arr[0]+k;
       int largest=arr[n-1]-k;
       for(int i=0;i<n;i++){
           mi=min(smallest,arr[i+1]-k);
           ma=max(largest,arr[i]+k);
           ans=min(ans,ma-mi);
       }
       return ans;
    }
};

// Minimize the height II
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        int mi,ma;
        sort(arr,arr+n);
       int ans = arr[n-1]-arr[0];
       int smallest=arr[0]+k;
       int largest=arr[n-1]-k;
       for(int i=0;i<n;i++){
           mi=min(smallest,arr[i+1]-k);
           ma=max(largest,arr[i]+k);
           if(mi<0){
               continue;
           }
           ans=min(ans,ma-mi);
       }
       return ans;;
    }
};
