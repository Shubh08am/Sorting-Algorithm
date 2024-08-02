#include<bits/stdc++.h>
using namespace std; 
//sort in descending order
  //using min heap
void heapify(vector<int>&arr,int n,int i){
    int smallest=i;
    int left=2*i+1,right=2*i+2; 
    if(left<n && arr[left]<arr[smallest]){
        smallest=left;
    }
    if(right<n && arr[right]<arr[smallest]){
        smallest=right;
    }
    if(smallest!=i){
        swap(arr[smallest],arr[i]) ; 
        heapify(arr,n,smallest); 
    }
}
void heapsort(vector<int>&arr,int n){
    //first make heap :- max heap
 for(int i=n/2-1;i>=0;i--){
    heapify(arr,n,i);
 }

 //now remove root node from max heap and bring smallest element on root node and heapify again 
 for(int i=n-1;i>0;i--){
    swap(arr[i],arr[0]); 
    heapify(arr,i,0);
 }
}
int main(){
    int n;cin>>n; 
    vector<int>arr(n); 
    for(int i=0;i<n;i++) cin>>arr[i] ; 
    
    heapsort(arr,n); 

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
 }
