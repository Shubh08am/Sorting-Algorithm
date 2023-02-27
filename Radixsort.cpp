#include<bits/stdc++.h>
using namespace std ; 

void countsort(int arr[] , int n , int bit){
int maxi = *max_element(arr,arr+n) ; 
    int freq[maxi+1]={0} ; 
    int result[n];

    for(int i=0;i<n;i++) freq[(arr[i]/bit)%10]++;

    for(int i=1;i<maxi+1;i++){
        freq[i]+=freq[i-1];
    }

    for(int i=n-1;i>=0;i--){
        int val = (arr[i]/bit)%10 ; 
        result[freq[val]-1] = arr[i];
        freq[val]--;
    }

    for(int i=0;i<n;i++){
        arr[i] = result[i];
    }
}

void Radixsort(int arr[] , int n){
int maxi = *max_element(arr,arr+n) ; 
int bit = 1 ; 
while(bit <= maxi) {
countsort(arr,n,bit);
bit*=10;
}
}

int main(){
    int n ; cin>>n ; 
    int arr[n] ; 
    for(int i=0;i<n;i++) cin>>arr[i] ; 

    Radixsort(arr,n);
    cout<<"After-RadixSort\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}
