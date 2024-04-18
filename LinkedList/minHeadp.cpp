#include<iostream>
using namespace std;

void insertMinHeap(int arr[], int& n, int value) {
    n = n + 1;
    arr[n-1] = value;  
    int i = n - 1;
    while (i > 0) {
        int parent = (i - 1) / 2; 
        if (arr[i] < arr[parent]) {
            swap(arr[i], arr[parent]);
            i = parent;
        }
        else {
            break;
        }
    }
    return;
}

int main() {
    int arr[] = {22, 25, 57, 48, 37, 12, 92, 86, 33};
    int n = 9;  
    insertMinHeap(arr, n, 66);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;  
}