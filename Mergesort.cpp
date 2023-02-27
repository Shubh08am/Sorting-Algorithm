#include<bits/stdc++.h>
using namespace std ; 

void merge(int arr[] , int s , int e){ 
   int mid = s+ (e-s)/2;
   int len1 = mid-s+1;
   int len2 = e-mid ; 

   int first[len1] , sec[len2] ; 
   int k = s ;

   for(int i=0;i<len1;i++){
    first[i] = arr[k] ;
    k++;
   }
   k=mid+1;
    for(int i=0;i<len2;i++){
    sec[i] = arr[k] ;
    k++;
   }
   
   int ind1 = 0 , ind2=0 , p = s ; 

   while(ind1<len1&&ind2<len2){
    if(first[ind1] < sec[ind2]){
        arr[p] = first[ind1] ; 
        p++;ind1++;
    }
    else   if(first[ind1] >= sec[ind2]){
        arr[p] = sec[ind2] ; 
        p++;ind2++;
    }
   }

   while(ind1<len1){
    arr[p] = first[ind1] ; 
    p++; ind1++;
   }
    while(ind2<len2){
    arr[p] = sec[ind2] ; 
    p++; ind2++;
   }  
}

void mergesort(int arr[] , int s , int e ){
   if(s>=e) return ;
   
   int mid = s+ (e-s)/2;
   mergesort(arr,s,mid);
   mergesort(arr,mid+1,e);
   
   merge(arr,s,e);
}

int main(){
    int n ; cin>>n ; 
    int arr[n] ; 
    for(int i=0;i<n;i++) cin>>arr[i] ; 

    mergesort(arr,0,n-1);
    cout<<"After-MergeSort\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}
