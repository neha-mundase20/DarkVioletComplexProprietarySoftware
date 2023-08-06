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

int lastOccurence(int arr[], int n, int key) {
  int result = -1;
  int l = 0, u = n - 1;

  while (l <= u) {
    int mid = l + ((u - l) / 2);
    if (arr[mid] == key) {
      result = mid;
      l = mid + 1;
    } else if (arr[mid] > key) {
      u = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return result;
}

int main() {
  int arr[20], n, key, result;

  cout << "\n"
       << "Enter the number of elements:"
       << "\n";
  cin >> n;
  input(arr, n);

  cout << "\n"
       << "Enter the key element:"
       << "\n";
  cin >> key;

  result=lastOccurence(arr, n,key );

  cout<<"\n"<<result<<"\n";

  return 0;
}