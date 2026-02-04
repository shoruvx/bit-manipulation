#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    
    while (end - start > 1)
    {
        int mid = (start + end) / 2;

        if (key == arr[mid])
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    if (arr[end] == key) return end;
    else if (arr[start] == key) return start;
    else return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};

    cout << binary_search(arr,7,6);

    return 0;
}