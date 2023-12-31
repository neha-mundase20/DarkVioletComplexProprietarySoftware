#include <iostream>
using namespace std;

void input(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "\n"
         << "Enter the elements:"
         << "\n";
    cin >> arr[i];
  }
}

int linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
      break;
    }
  }
  return -1;
}

//non-recursive
int binarySearchIterative(int arr[], int n, int key) {
  int l = 0, u = n - 1;

  while (l <= u) {
    int mid = (l + u) / 2;
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] > key) {
      u = mid - 1;
    } else {
      l = mid + 1;
    }
  }
}

//recursive
int binarySearchRecursive(int arr[],int n,int key,int s,int e){
  int mid=(s+e)/2;
  //base case
  if(s>e){
    return;
  }
  //base case
  if(arr[mid]==key){
    return mid;
  }
  else if(arr[mid]>key){
    return binarySearchRecursive(arr,n,key, s,mid-1);
  }
  else{
    return binarySearchRecursive(arr,n,key, mid+1,e);
  }
}

int main() {
  int arr[20], n, val1, val2, val3, key;

  cout << "\n"
       << "Enter the number of elements:"
       << "\n";
  cin >> n;
  input(arr, n);

  cout << "\n"
       << "Enter the key element:"
       << "\n";
  cin >> key;

  val1 = linearSearch(arr, n, key);
  cout << "\n" << val1 << "\n";

  val2 = binarySearchIterative(arr, n, key);
  cout << "\n" << val2 << "\n";

  int s=0,e=n-1;
   val3 = binarySearchRecursive(arr, n, key,s,e);
   cout << "\n" << val3 << "\n";

  return 0;
}