#include<bits/stdc++.h>
using namespace std; 
//O(N^2)
void selection_sort(vector<int>&arr,int n){
  for(int i=0;i<n-1;i++){
        int mini=i; 
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]) mini=j;
        }
        swap(arr[i],arr[mini]);
    }
}
int main(){
     //get minimums 
    int n;cin>>n; 
    vector<int>arr(n) ; 
    for(int i=0;i<n;i++) cin>>arr[i] ; 
     
    selection_sort(arr,n);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
