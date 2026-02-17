int maxProfit(vector<int>& prices) {
        int mxprofit = 0, bestbuy = prices[0];

      for(int i=0;i<prices.size();i++){
        if(prices[i] > bestbuy){
            mxprofit = max(mxprofit,prices[i] - bestbuy);
        }
        bestbuy = min(bestbuy, prices[i]);
      }
      return mxprofit;
    }
