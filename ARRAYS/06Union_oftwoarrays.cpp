// For sorted arrays when duplicacy occurs
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

// 2nd method
// for sorted arrays by remove duplicacy 
vector<int> findUnion(int a[], int b[], int n, int m)
{
  vector<int>v,v1;
   int cnt=0;
   int i=0,j=0;
   while(i<n && j<m){
    if(a[i]<b[j]){
        v.push_back(a[i]);
        cnt++;
        i++;
    }
    else if(a[i]>b[j]){
        v.push_back(b[j]);
        cnt++;
        j++;
    }
    else{
        v.push_back(a[i]);
        cnt++;
        i++;
        j++;

    }
   }
  if(i!=n){
       while(i<n){
        cnt++;
        v.push_back(a[i]);
        i++;
       }
   }
   if(j!=m){
    while(j<m){
        v.push_back(b[j]);
        cnt++;
        j++;
    }
   }
//   cout<<cnt<<endl;
v1.push_back(v[0]);
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]){
        
    }
    else{
        v1.push_back(v[i]);
    }
}

return v1;
    }
