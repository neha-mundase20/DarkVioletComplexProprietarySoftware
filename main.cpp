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

int binarySearch(int arr[], int n, int key) {
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

int main() {
  int arr[20], n, val1, val2, key;

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

  val2 = binarySearch(arr, n, key);
  cout << "\n" << val2 << "\n";

  return 0;
}