#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        // go to right
        // start will be shifted to mid+1
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        // go to left
        // end will be shifted to mid-1
        else
        {
            end = mid - 1;
        }

        // mid = (start + end) / 2;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int oddArray[5] = {1, 3, 5, 7, 9};
    int evenArray[6] = {2, 4, 6, 8, 10, 12};

    int index = BinarySearch(oddArray, 5, 7);

    cout << "Index of odd array searched number is  : " << index << endl;

    cout << endl;

    int x = BinarySearch(evenArray, 6, 6);
    cout << "Index of even array searched number is  : " << x << endl;
}