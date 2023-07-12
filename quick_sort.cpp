#include<bits/stdc++.h>
using namespace std; 

int partition(int low,int high,vector<int>&arr){
    int i=low,j=high;
    int pivot = arr[i] ; //first element is picked as pivot 
while(i<j){
   

    //from left find first larger element than pivot 
    while(arr[i]<=pivot && i<=high-1){
        i++;
    }
    //from right find first smaller element than pivot 
    while(arr[j]>pivot && j>=low+1){
        j--;
    }

    //swap them if i<j 
    if(i<j){
        swap(arr[i],arr[j]) ;
    }
}
//place pivot element in its correct place 
swap(arr[low],arr[j]) ; 
//return position of partition_index 
return j;
}
void quicksort(int low,int high,vector<int>&arr){
if(low<high){
    int partition_Index = partition(low,high,arr) ; 
    //left call 
    quicksort(low,partition_Index-1,arr);
    //right call 
    quicksort(partition_Index+1,high,arr) ;
}
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n) ; 
    for(int i=0;i<n;i++){
        cin>>arr[i] ; 
    }
    quicksort(0,n-1,arr) ; 
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}
