#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int value){
  
  while (left <= right){
      int mid = (left + right) / 2;
      //mid and value equal the same
      if (arr[mid] == value){
        return mid;
      }
      //value in right half
      else if (arr[mid] < value){
        left = mid + 1;
      }
      //value in the left half
      else if (arr[mid] > value){
        right = mid - 1;
      }
  }
  return -1;
}

int main() {

  int arr[]= {1,2,3,4,5,6};
  
  cout << "Should be 3: ";
  cout << binarySearch(arr, 0, 5, 4) << endl;
  cout << "Should be -1: ";
  cout << binarySearch(arr, 0, 5, 100) << endl;

}