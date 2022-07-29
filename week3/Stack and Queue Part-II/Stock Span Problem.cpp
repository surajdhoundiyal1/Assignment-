#include<bits/stdc++.h>
vector<int> findSpans(vector<int> &arr) {
    // Write your code here.
    vector<int> ans;
    int n=arr.size();
    ans.push_back(1);
    stack<int> st;
    st.push(0);
    for(int i=1; i<n; i++)
    {
        while(!st.empty() && arr[st.top()]<=arr[i]) st.pop();
        if(st.empty()) ans.push_back(i+1);
        else ans.push_back(i-st.top());
        st.push(i);
    }
    return ans;
}
