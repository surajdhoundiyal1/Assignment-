#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i,j;
if(n==1)
        return permutation;
else{ 
  for(i=n-2;i>=0;i--){
        if(permutation[i+1]>permutation[i])
        break;
    }
    if(i<0) //pure ascending order....
     reverse(permutation.begin(),permutation.end());
   else{
    for(j=n-1;j>i;j--){
        if(permutation[j]>permutation[i]){ //find element greater than element who is involved in ascending order....
            break;
        }
    }
          swap(permutation[i],permutation[j]); //swap both elements
          reverse(permutation.begin()+i+1,permutation.end());
   }
    return permutation;
}
}
