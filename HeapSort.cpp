#include<bits/stdc++.h>
using namespace std ; 

void heapify(int arr[] , int n , int i){
   int largest = i ; 
   int left = 2*i+1;
   int right = 2*i+2; 

   if(left<n && arr[largest]<arr[left]){
    largest=left;
   }
   if(right<n && arr[largest]<arr[right]){
    largest=right;
   }

   //swapping 
   if(largest!=i){
         swap(arr[largest],arr[i]);
         heapify(arr,n,largest);
   }
}

void heapsort(int arr[] , int n ){
   //from non-leaf nodes 
   for(int i=n/2-1;i>=0;--i){
    heapify(arr,n,i);
   }
   
   for(int i=n-1;i>0;i--){
    swap(arr[i],arr[0]);
   heapify(arr,i,0);
   }

}

int main(){
    int n ; cin>>n ; 
    int arr[n] ; 
    for(int i=0;i<n;i++) cin>>arr[i] ; 

    heapsort(arr,n);
    cout<<"After-HeapSort\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}
