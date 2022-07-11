// Kadens Algorithm
#include<iostream>
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
   int currentsum=0;
   int maxsum=a[0]; 
   for(int i=0;i<n;i++){
    currentsum+=a[i];
     if(currentsum>maxsum){
       maxsum=currentsum;
     }
     if(currentsum<0){
        currentsum=0;
     }
   }
   cout<<maxsum<<endl;
}
// T.C=O(N)
// S.C=O(1)
