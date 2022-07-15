long long int inversionCount(long long a[], long long n)
    {
        // Your Code Here
        long long int cnt=0;
    for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
               cnt++;  
            }
            continue;
        }
        return cnt;
    }
//     t.c=O(n^2)
