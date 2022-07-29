void mergeSort(vector<int>&arr,int low,int mid,int high){
    int n1=mid-low+1,n2=high-mid;
    vector<int>a(n1,0);
    vector<int>b(n2,0);
    for(int i=0;i<n1;i++)a[i]=arr[low+i];
    for(int i=0;i<n2;i++)b[i]=arr[mid+1+i];
    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;k++;
        }
        else{
            arr[k]=b[j];
            j++;k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;k++;
    }
}
void merge(vector<int>&arr,int start,int end){
    if(start<end){
        int mid=start+(end-start)/2;
        merge(arr,start,mid);
        merge(arr,mid+1,end);
        mergeSort(arr,start,mid,end);
    }
}
vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
	//	Write your coode here.
    vector<int>ans;
    //sort(arr.begin(),arr.end());
    merge(arr,0,arr.size()-1);
    for(auto q:queries){
        int maxi=-1e9;
        if(arr[0]>q[1])ans.push_back(-1);
        else{
            for(int i=0;i<arr.size();i++){
                if(arr[i]<=q[1]){
                    maxi=max(maxi,arr[i]^q[0]);
                }
            }
            ans.push_back(maxi);
        }
    }
    return ans;
}
