// 1st method
#include<iostream>
using namespace std;

int main() {
	int t,n,a[1000];
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int x=a[n-1];
	    for(int i=n-1;i>0;i--){
	        a[i]=a[i-1];
	    }
	    a[0]=x;
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

// 2nd method
void rotate(int arr[], int n)
{
    int i = 0, j = n-1; 
      while(i != j){
      swap(arr[i], arr[j]);
      i++;
    }
}

// T.C=O(N)
// S.C=O(1)
