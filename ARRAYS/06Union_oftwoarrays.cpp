For sorted arrays
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  int n,m;
  cin>>n>>m;
  int a[n],b[m];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }   
  for(int j=0;j<m;j++){
    cin>>b[j];
  }
   int cnt=0;
   int i=0,j=0;
   while(i<n && j<m){
    if(a[i]<b[j]){
        cnt++;
        i++;
    }
    else if(a[i]>b[j]){
        cnt++;
        j++;
    }
    else{
        cnt++;
        i++;
        j++;
    }
   }
   if(i!=n-1){
       while(i<n){
        cnt++;
        i++;
       }
   }
   if(j!=m-1){
    while(j<m){
        cnt++;
        j++;
    }
   }
   cout<<cnt<<endl;
}
