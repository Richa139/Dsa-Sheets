class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int dup=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                dup=nums[i];
            }
        }
        return dup;
    }
};
// t.c=O(nlogn)
// s.c=O(n) depend upon the sorting algorithm

class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n;i++){
            int pos=abs(a[i]);
            if(a[pos-1]<0){
                return pos;
            }
            else{
                a[pos-1]=-abs(a[pos-1]);
            }
        }
        return -1;
    }
};
// t.c=O(n)
//   s.c=O(1)
