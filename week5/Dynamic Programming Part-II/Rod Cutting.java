import java.util.*;
public class Solution {
	public static int cutRod(int []nums, int n) {
		// Write your code here.
        int[][] dp = new int[n][n+1];
        for(int N = 0;N<=n;N++){
            dp[0][N] = N* nums[0];
        }
        for(int idx = 1;idx<n;idx++){
            for(int N = 0;N<=n;N++){
                int notPick = dp[idx-1][N];
                int pick = Integer.MIN_VALUE;
                int rodLength= idx+1;
                if(rodLength<=N){
                    pick = nums[idx] + dp[idx][N-rodLength];
                    
                }
                dp[idx][N] = Math.max(pick, notPick);
            }
        }
        return dp[n-1][n];
	}
}
