void fun(int index,int sum,vector<int>num,vector<int>&ans){
    if(index==num.size()){
        ans.push_back(sum);
        return;
    }
    fun(index+1,sum+num[index],num,ans);
    fun(index+1,sum,num,ans);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int>ans;
    fun(0,0,num,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
