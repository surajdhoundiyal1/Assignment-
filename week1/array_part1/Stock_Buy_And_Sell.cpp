#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int min=prices[0],max_profit=0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]<min)
            min=prices[i];
        if(prices[i]-min>max_profit)
            max_profit=prices[i]-min;
    }
    return max_profit;
}
