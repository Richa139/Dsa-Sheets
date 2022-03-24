//1st method(linear comparisons)
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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_element=arr[0];
    int min_element=arr[0];
     for(int i=1;i<n;i++){
       if(max_element<arr[i]){
          max_element=arr[i];
       }
      else if(min_element>arr[i]){
         min_element=arr[i];
       }
     }
     cout<<"min_element "<<min_element<<endl;
     cout<<"max_element "<<max_element<<endl;
}
// time complexity:O(n)
// no of iterations : 2*(n-1);(worst case),n-1(best case)



//2nd method (best)(comaparisons in pairs)
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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int max_element=arr[0];
    int min_element=arr[0];
    if(n%2!=0){
     max_element=arr[0];
     min_element=arr[0];
    i=1;
    }
else{
   if(arr[i]>arr[i+1]){
    max_element=arr[i];
    min_element=arr[i+1];
   }
   else{
    min_element=arr[i+1];
    max_element=arr[i];
   }
   i=2;
}
while(i<n){
    if(arr[i]>arr[i+1]){
        if(arr[i]>max_element){
            max_element=arr[i];
        }
        if(arr[i]<min_element){
            min_element=arr[i+1];
        }
    }
    else{
        if(arr[i]<min_element){
        min_element=arr[i];
       }
       if(arr[i]>max_element){
        max_element=arr[i+1];
       }
    }
    i+=2;
}
cout<<"min_element "<<min_element<<endl;
cout<<"max_element "<<max_element<<endl;
}
// Total number of comparisons:-

// If n is odd, 3 * (n-1) / 2
// If n is even, 1 + 3*(n-2)/2 = 3n/2-2

// For each pair, there are a total of three comparisons, first among the elements of the pair and the other two with min and max.
// Time Complexity is O(n) and Space Complexity is O(1).
