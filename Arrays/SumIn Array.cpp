//Find a pair with the given sum in a given unsorted array
//Approaches: brute force, hashing, sorting

//Using hashing: linear time space

#include <stdio.h>
#include <iostream>
#include<unordered_map>
using namespace std;

void Pair(int arr[], int n ,int sum){
	unordered_map<int, int> map;
	for(int i =0; i<n; i++){
		if (map.find(sum - arr[i]) != map.end() ){
			cout<<"Pair found ("<< arr[map[sum-arr[i]]] <<" ,"<<arr[i]<<")";
			return;
		}
		map[arr[i]]=i;
	}
	cout<<"Pair not found"<<endl;
}

int main(){
	int n, sum;
	int arr[n];
	cin>>n;
	cin>>sum;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	Pair(arr,n,sum);
	return 0;
	
}
