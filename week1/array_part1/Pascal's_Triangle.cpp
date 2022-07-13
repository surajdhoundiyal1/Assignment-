#include <bits/stdc++.h> 
#include<vector>
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> pascal;
  for(int i=0;i<n;i++){
      vector<long long int> p;
      long long int element;
       for(int j=0;j<=i;j++){
           if(j==0 || j==i){
               element=1;
           }
           else{
               element=pascal[i-1][j-1]+pascal[i-1][j];
           }
           p.push_back(element);
       }
      pascal.push_back(p);
   }
    
   return pascal;
}
