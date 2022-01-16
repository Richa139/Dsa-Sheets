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
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
 	cin>>a[i];
 }   
 int i=0;
 int j=n-1;
 while(i<j){
 	if(a[j]<0){
 		swap(a[i],a[j]);
 		i++;
 	}
 	else if(a[i]>0){
 		swap(a[i],a[j]);
 		j--;
 	}
 	else{
 		i++;
 		j--;
 	}
 }
  for(int i=0;i<n;i++){
 	cout<<a[i]<<" ";
 }   
}
