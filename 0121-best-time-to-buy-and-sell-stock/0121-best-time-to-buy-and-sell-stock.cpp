class Solution {
    public int maxProfit(int[] prices) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        int sum = 0;
        for(int i=0;i<prices.length;i++){
            if(prices[i]<=min){
                min = max = prices[i];
            }
            else if(prices[i]>=max)
                max = prices[i];
            sum = sum<=(max-min) ? max-min : sum;
        }
        return sum;
    }
}