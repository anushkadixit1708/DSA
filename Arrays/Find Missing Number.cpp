//Given an unsorted array of size n. Array elements are in the range from 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. 
//Find these two numbers.

//Approach - Traverse the array. While traversing, use the absolute value of every element as an index and make the value at this index as negative to mark it visited.
//If something is already marked negative then this is the repeating element. To find missing, traverse the array again and look for a positive value. 
//The array gets modified, this approach is not recommended.

#include<bits/stdc++.h>
using namespace std;

void Elements(int arr[], int size){
	int i;
//The absolute value of array in used as index and marked negative, if it is already negative then it has been visited already
	cout<<"Repeating Element ";
	for(int i=0; i<size; i++){
		if(arr[abs(arr[i])-1]>0){
			arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
			
		}
		else{
			cout<< abs(arr[i])<<endl;
		}
	}
//The absolute value of array is used as the index value. If the index value of any element is greater than 0, then that does not exist in the array	
	cout<<"Missing Elemnent ";
	for(int i=0; i<size; i++){
	if(arr[i] >0){
		cout<< (i+1);
	}
}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int j=0; j<n; j++){
		cin>>arr[j];
	}
	Elements(arr,n);
}

