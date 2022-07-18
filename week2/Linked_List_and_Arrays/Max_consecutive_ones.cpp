class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int ans=0,curr=0;
        for(int i=0;i<nums.size();i++) {
            curr=nums[i] ? curr+1 : 0;
            ans=max(curr,ans);
        }
        return ans;
        
    }
};
