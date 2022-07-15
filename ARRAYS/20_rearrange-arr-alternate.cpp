class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int indexpos=0;
        int indexneg=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[indexpos]=nums[i];
                indexpos+=2;
            }
            else if(nums[i]<0){
                    ans[indexneg]=nums[i];
                    indexneg+=2;
                }
        }
        return ans;
    }
};
// t.c=n
// s.c=n
