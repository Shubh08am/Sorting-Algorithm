#include<bits/stdc++.h>
using namespace std; 
//O(N^2) AVG WORST
//O(N) BEST , ALREADY SORTED 
//maximum pushed at last -> swap adjacent elements 

void bubble_sort(vector<int>&arr,int n){
    bool swapped=false; 

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]) ; 
                swapped=true;
            }
        }
        if(swapped==false) break ;
    }
}
int main(){
     //get minimums 
    int n;cin>>n; 
    vector<int>arr(n) ; 
    for(int i=0;i<n;i++) cin>>arr[i] ; 
     
    bubble_sort(arr,n) ; 

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
