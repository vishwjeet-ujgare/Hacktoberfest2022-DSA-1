#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//Function to print array
void printArray(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}
//Function to reverse array using an auxiliary array
void reverseArray(int arr[], int n) {
  int s = 0, e = n-1;
  while(s<=e){
   swap(arr[s],arr[e]);
   s++;
   e--;
  }
   printArray(arr,n);
}
int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(arr, n);
   return 0;
}