#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int n ; cin>>n ; 
    int arr[n] ; 
    for(int i=0;i<n;i++) cin>>arr[i] ; 

   int maxi = *max_element(arr,arr+n) ; 
    int freq[maxi+1]={0} ; 
    int result[n];

    for(int i=0;i<n;i++) freq[arr[i]]++;

    for(int i=1;i<maxi+1;i++){
        freq[i]+=freq[i-1];
    }

    for(int i=0;i<n;i++){
        int val = arr[i] ; 
        result[freq[val]-1] = arr[i];
        freq[val]--;
    }
    
    cout<<"After-CountSort\n";
    for(int i=0;i<n;i++) cout<<result[i]<<" ";

}
