class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
      for(int i=0;i<prices.size();i++){
          for(int j=i+1;j<prices.size();j++){
              if(prices[i]>prices[j]){
                  continue;
              }
              else{
                maxprofit=max(maxprofit,prices[j]-prices[i]);  
              }
          }
      }  
        return maxprofit;
    }
};
// time limit excedded
// t.c=O(n^2)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minimum=prices[0];
      for(int i=0;i<prices.size();i++){
          maxprofit=max(maxprofit,prices[i]-minimum);
          minimum=min(minimum,prices[i]);
      }  
        return maxprofit;
    }
};
