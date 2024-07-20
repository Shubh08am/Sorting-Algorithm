#include<bits/stdc++.h>
using namespace std; 
//O(N^2) WORST AVG 
//O(N) BEST -> SORTED ORDER IN ASCENDING ORDER
//take an element and place it in its correct order 
//go on left and do right swaps till possible 

void insertion_sort(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        int j=i; 
        while(j>0 && arr[j-1]>arr[j]) {
            swap(arr[j-1],arr[j]) ; 
            j--;
        }
    }
}
int main(){
     //get minimums 
    int n;cin>>n; 
    vector<int>arr(n) ; 
    for(int i=0;i<n;i++) cin>>arr[i] ; 
     
    insertion_sort(arr,n) ; 

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
