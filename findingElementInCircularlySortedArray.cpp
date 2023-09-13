#include <iostream>
using namespace std;

void input(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "\n"
         << "Enter the element:"
         << "\n";
    cin >> arr[i];
  }
}

int findElement(int arr[], int n, int x) {
  int l = 0, h = n - 1;
  int mid = l + ((h - l) / 2);

  while (l <= h) {
    if (arr[mid] == x) {
      return mid;
    } 
    else if (arr[mid] <= arr[h]) { // right half is sorted
      if (x > arr[mid] && x <= arr[h]) {
        l = mid + 1;   //go seraching in right sorted half
      }
      else{
        h=mid-1;   //go searching left
      }
    } 
    else {
      if (x >= arr[l] && x < arr[mid]) {//left half is sorted
        h = mid - 1;   //go searching in left sorted half
      }
      else{
        l=mid+1;   //go searching right
      }
    }
  }
}
  
int main() {
  int arr[20], n, x, val;
  cout << "\n"
       << "Enter the number of elements:"
       << "\n";
  cin >> n;
  input(arr, n);
  cout << "\n"
       << "Enter the element that is to be searched for:"
       << "\n";
  cin >> x;
  val = findElement(arr, n, x);
  cout << "\n"
       << "The element is found at index:"
       << "\n";
  cout << val;
  return 0;
}