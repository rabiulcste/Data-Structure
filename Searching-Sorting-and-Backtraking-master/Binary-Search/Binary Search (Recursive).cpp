#include <bits//stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if(r >= l)
    {
        int mid = l + (r-l)/2;

        // If the element is present at the middle itself
        if(arr[mid] == x) return mid;

        // If element is smaller than mid, then it can only be present at left subarray
        if(arr[mid]>x) return binarySearch(arr, l, mid-1, x);

        // If element is bigger than mid, then it can only be present at right subarray
        return binarySearch(arr, mid+1, r, x);
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n-1, x);
    (result == -1)? printf("Element is not present in array")
                    : printf("Element is present in index %d", result);

    return 0;
}
