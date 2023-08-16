// we will find the first occurence of the element and we will find the last
// occurence of the same element
// we will subtract these occurences and add 1 to the result obtained after
// subtraction to find out the count

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

int firstOccurence(int arr[], int n, int key) {
  int l = 0, u = n - 1, result = -1;

  while (l <= u) {
    int mid = l + ((u - l) / 2);
    if (arr[mid] == key) {
      result = mid;
      u = mid - 1;
    } else if (arr[mid] > key) {
      u = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return result;
}

int lastOccurence(int arr[], int n, int key) {
  int l = 0, u = n - 1, result = -1;

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
  int arr[20], n, key, val1, val2;

  cout << "\n"
       << "Enter the number of elements:"
       << "\n";
  cin >> n;
  input(arr, n);

  cout << "\n"
       << "Enter the key element:"
       << "\n";
  cin >> key;

  val1 = firstOccurence(arr, n, key);
  val2 = lastOccurence(arr, n, key);

  int count = val2 - val1 + 1;

  cout << "The key has occurred:"
       << "\n"
       << count << "\t"
       << "times";

  return 0;
}