#include <iostream>
#include <vector>

int binarySearchFirst(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;  // Continue searching in the left subarray
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int binarySearchLast(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            left = mid + 1;  // Continue searching in the right subarray
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 6};

    int target = 4;

    int firstIndex = binarySearchFirst(arr, target);
    int lastIndex = binarySearchLast(arr, target);

    if (firstIndex != -1 && lastIndex != -1) {
        std::cout << "First occurrence index: " << firstIndex << std::endl;
        std::cout << "Last occurrence index: " << lastIndex << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}