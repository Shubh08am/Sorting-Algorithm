#include<bits/stdc++.h>
using namespace std; 

int merge(vector<int>&arr,int low,int mid,int high){
    int left=low,right=mid+1,inversion=0;
    vector<int>temp ; 
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            inversion+=mid-left+1; 
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low]; 
    }
    return inversion;
}
int merge_sort(vector<int>&arr,int low,int high){
    int inversion=0;
    if(low>=high) return inversion;
    int mid=low+(high-low)/2;
    inversion+=merge_sort(arr,low,mid); 
    inversion+=merge_sort(arr,mid+1,high); 
    inversion+=merge(arr,low,mid,high); 
    return inversion;
}
int main(){
    int n;cin>>n; 
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i] ; 

    int inversion= merge_sort(arr,0,n-1) ;
    cout<<inversion;
}
