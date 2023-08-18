#include<iostream>
#include<climits>
using namespace std;

void input(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<"\n"<<"Enter the element:"<<"\n";
    cin>>arr[i];
  }
}

int calculateNumberOfTimesArrayRotated(int arr[],int n){
  int l=0,h=n-1;
  
  while(l<=h){
    int mid=l+((h-l)/2);
    int next=(mid+1)%n,prev=(mid+n-1)%n;
    // case1 - if the array is not rotated itself
    if(arr[l]<=arr[h]){
      return l;
    }
    // case2 - pivot property i.e. elements to both left and right of mid elements are greater. Hence, mid will be the 
    //smallest element
    else if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
      return mid;
    }
    // case3 - now we will be dividing the search space into halves based on the conditions
    else if(arr[mid]<=arr[h]){
     h=mid-1; 
    }
    else{
      l=mid+1;
    }
  }
  return -1;
}

int main(){
  int arr[20],n,count;
  cout<<"\n"<<"Enter the number of elements:"<<"\n";
  cin>>n;
  input(arr,n);
  cout<<"\n"<<"The number of times array rotated is:"<<"\n";
  count=calculateNumberOfTimesArrayRotated(arr, n);
  cout<<count;
}
