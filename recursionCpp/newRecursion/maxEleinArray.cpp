#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

void MaxEle(int arr[], int n, int &max, int &i) {
    if (i >= n) {
        cout << max;
        return;
    }
    if (arr[i] > max) {
        max = arr[i];
    }
    MaxEle(arr, n, max, ++i);
}

int main() {
    int arr[] = {1, 34, 5, 6, 7, 3};
    int n = 6;
    int max = INT_MIN;
    int i = 0;
    MaxEle(arr, n, max, i);
    return 0;
}
