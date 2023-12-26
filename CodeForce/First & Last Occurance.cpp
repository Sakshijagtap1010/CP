// First/Last Occurrence of an Element in array: https://bit.ly/3Ioexjh 

#include <bits/stdc++.h>
#include<vector>
using namespace std;

int FirstOccurance(vector<int> &arr, int n, int key) {
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e) {
    if (arr[mid] == key) {
      ans = mid;
      e = mid - 1;
    } else if (key > arr[mid]) {
      s = mid + 1;

    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
int LastOccurance(vector<int> &arr, int n, int key) {
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e) {
    if (arr[mid] == key) {
      ans = mid;
      s = mid + 1;
    } else if (key > arr[mid]) {
      s = mid + 1;

    } else {
      e = mid - 1;
    }
    int mid = s + (e - s) / 2;
  }
  return ans;
}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
  pair<int, int> p;
  p.first = FirstOccurance(arr, n, k);
  p.second = LastOccurance(arr, n, k);

  return p;
}
