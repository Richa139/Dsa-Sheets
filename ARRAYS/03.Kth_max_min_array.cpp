// 1st method by inbuilt sort
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
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[k-1];
}
// Time Complexity
// Best Case – O(N log N)
// Average Case- O(N log N)
// Worse Case- O(N log N)

// space complexity:O(n);

//2nd method using Heaps(Priority queue)
class Solution{
    public:
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    int kthSmallest(int arr[], int l, int r, int k) {
         priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<=r;i++){
        p.push(arr[i]);
    }
    int ans,i=0;
    while(i<=r){
        if(!p.empty()){
        if(i==k-1){
            ans=p.top();
            p.pop();
            break;
        }
        }
        i++;
        p.pop();
    }
        return ans;
    }
};
// The time complexity for this approach is - O(n+logn)
// The space complexity for this approach will be - O(n).

// Creating a heap takes O(n) time while inserting into a heap (or priority queue) takes O(log(n)) time.
