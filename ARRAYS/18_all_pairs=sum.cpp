int getPairsCount(int arr[], int n, int k) {
        // code here
        int cnt=0;
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               if((arr[i]+arr[j])==k){
                  cnt++; 
               }
           }
       }
       return cnt;
  
//   time limit excedded
//   t.c=O(n^2)
//    s.c=O(1)
  
  
//   using map 
  int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int>m;
        int ans=0;
       for(int i=0;i<n;i++){
            int b=k-arr[i];
            if(m[b]){
                ans+=m[b];
            }
            m[arr[i]]++;
           
       }
       return ans;
//  Time Complexity: O(n), to iterate over the array
// Auxiliary Space: O(n), to make a map of size n
