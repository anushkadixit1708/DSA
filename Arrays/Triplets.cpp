// A program to find three elements whose sum is equal to zero
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void triplets(int arr[], int n){
    bool found = false;
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    cout<< arr[i]<<" ";
                    cout <<arr[j]<<" ";
                    cout<<arr[k]<<endl;
                    found = true;
                }
                
            }
        }
    }
    if(found ==false){
        cout<<"Triplets not found"<<endl;
    }
    
}

int main()
{
    int n;
    int arr[n];
    cin>>n;
    for(int l =0; l<n; l++){
        cin>>arr[l];
    }
    
    triplets(arr , n);
    return 0;
}
