#include <iostream>

using namespace std;

void sort(int n);
void swap(int *p1, int *p2);

int arr[10];

int main()
{
  for (int i = 0; i < 10; ++i) {
    cout << "Enter array at index " << i << ": ";
    cin >> arr[i];
  }
  sort(10);
  
  cout << "Here is the array sorted:" << endl;
  for (int i = 0; i < 10; ++i) {
    cout << arr[i] << "  ";
  }
  return 0;
}

void sort (int n) {
  int low = 0;
  for (int i = 0; i < n-1; ++i) {
    low = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < arr[low]) {
        low = j;
      }
    }
    if ( i != low) {
      swap(&arr[i], &arr[low]);
    }
  }
}

void swap (int *p1, int *p2) {
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}