#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int z=0,o=0,t=0;
    for(int i=0;i<n;i++){
       if(arr[i]==0)
           z++;
        else if(arr[i]==1)
            o++;
        else
            t++;
    }
    for(int i=0;i<z;i++)
        arr[i]=0;
    for(int i=z;i<z+o;i++)
        arr[i]=1;
    for(int i=z+o;i<z+o+t;i++)
        arr[i]=2;
}
