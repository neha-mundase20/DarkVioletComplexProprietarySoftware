#include<iostream>
using namespace std;

void input(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<"\n"<<"Enter the element:"<<"\n";
    cin>>arr[i];
  }
}

int firstOccurence(int arr[],int n,int key){
  int l=0,u=n-1,result=0;

  while(l<=u){
    int mid=l+((u-l)/2);
    if(arr[mid]==key){
      result=mid;   //element is found but we need to check for 
      // first occurence i.e. we need to check on the left side 
      u=mid-1;
    }
    else if(arr[mid]>key){
      u=mid-1;
    }
    else{
      l=mid+1;
    }
  }
  return result;
}

int main(){
  int arr[20],n,result,key;
  
  cout<<"\n"<<"Enter the number of elements:"<<"\n";
  cin>>n;
  
  input(arr,n);
  
  cout<<"\n"<<"Enter the key element:"<<"\n";
  cin>>key;

  result=firstOccurence(arr,n,key);

  cout<<"\n"<<"The first occurrence of the element:"<<"\n";
  cout<<"\n"<<result<<"\n";
  
  return 0;
}