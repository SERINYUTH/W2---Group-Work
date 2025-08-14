#include <iostream>
using namespace std;

int findMax(int arr[], int num) {
  int max = arr[0];
  for (int i = 1; i < num; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}

int main() {
  int num;
  cout << "Enter the size of the array: ";
  cin >> num;

  int arr[num];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < num; i++) {
    cin >> arr[i];
  }

  int max = findMax(arr, num);
  cout << "Maximum element: " << max << endl;

  return 0;
}