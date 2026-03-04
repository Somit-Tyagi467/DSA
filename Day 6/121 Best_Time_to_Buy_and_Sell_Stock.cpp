class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit =0 ;
        int l=0;
        int r=1;
        while(r<n){
            if(prices[r]>prices[r-1]){
                max_profit=max(max_profit,prices[r]-prices[l]);
            }
            else if(prices[r]<prices[l]){
                l=r;
            }
            r++;
        }

        return max_profit;
    }
};

//better solution migh