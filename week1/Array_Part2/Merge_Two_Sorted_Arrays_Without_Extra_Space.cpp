#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
      vector<int>v;

   int i=0,j=0;

while(i<m  && j<n)

   {  

       if(arr1[i]<arr2[j])

       {

           v.push_back(arr1[i++]);

             

       }

//         else if(arr1[i]==arr2[j])

//         {

//              v.push_back(arr1[i++]);

//              v.push_back(arr2[j++]);

           

//         }

       else

       {

            v.push_back(arr2[j++]);

       }

   }

   while(i<m)

   {

        v.push_back(arr1[i++]);

   }

   while(j<n)

   {

        v.push_back(arr2[j++]);

   }

   return v;
}
