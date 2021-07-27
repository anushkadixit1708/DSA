//Find the minimum and maximum element in an array
#include <iostream>
using namespace std;

void MinMax(int arr[], int n, int &min, int &max){
  //Initialize the max and min with the first element of the array
  max = arr[0]; min = arr[0];        
  //traversing through the array
  for(int i=0; i<n; i++){
    if(arr[i]>max)
      max = arr[i];
    if(arr[i]<min)
      min = arr[i];
  }
  
}

int main(){
  //n is the size of array, min and max to store the element
  int n,min,max;
  int arr[n];
  cin>>n;
  for(int i=0; i<n;i++){
    cin>>arr[i];
  }
  
  //calling the function MinMax
  MinMax(arr, n, min, max);
  
  cout<<"Maximum value"<<max<<endl;
  cout<<"Minimum value"<<min<<endl;
  
  return 0;
}
