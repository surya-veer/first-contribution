/*
Each element appear even no. of times except one element [occuring odd number of times]
Input 1: 1, 2, 3, 1, 2, 3, 3
Output 1: 3
Input 1: 1, 2, 3, 1, 2, 3, 4, 2, 2, 5, 4, 5, 4
Output 1: 4
*/

#include<iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int a[n], x=0;
  for (int i=0; i<n; i++) {
    cin >> a[i];
    if (i == 0)
      x = a[i];
    if (i != 0)
      x ^= a[i];
  }
  cout << x;
  return 0;
}
