#include<bits/stdc++.h>
int f(int i,int j,vector<int> &arr,vector<vector<int>> &dp){
    if(i==j) return 0;
    int mini=1e9;
    if(dp[i][j]!=-1) return dp[i][j];
    for(int k=i;k<j;k++){
        int cost=arr[i-1]*arr[k]*arr[j]+f(i,k,arr,dp)+f(k+1,j,arr,dp);
        mini=min(cost,mini);
    }
    return dp[i][j]=mini;
}
int matrixMultiplication(vector<int> &arr, int n)
{
    vector<vector<int>> dp(n,vector<int>(n,-1));
    return f(1,n-1,arr,dp);
    
}
