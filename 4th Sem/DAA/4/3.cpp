#include <bits/stdc++.h>
using namespace std;

int quick_sort_partition(int arr[], int start, int end)
{

    int key = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= key)
            count++;
    }

    // Giving key element its correct position
    int keyIndex = start + count;
    swap(arr[keyIndex], arr[start]);
    // Sorting left and right parts of the key element
    int i = start, j = end;

    while (i < keyIndex && j > keyIndex)
    {

        while (arr[i] <= key)
        {
            i++;
        }

        while (arr[j] > key)
        {
            j--;
        }

        if (i < keyIndex && j > keyIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return keyIndex;
}

void quickSort(int arr[], int start, int end)
{

    // base case
    if (start >= end)
        return;

    // quick_sort_partitioning the array
    int p = quick_sort_partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int main()
{
    clock_t start,end;

    start = clock();

    int n;
    cout << "enter the index" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);
    cout << "the sorted elements are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    

    end = clock();
    double time = (double)(end - start) / (double)CLOCKS_PER_SEC;

    cout << endl
         << endl;
    cout << "Time taken is " << time << endl;
    
    return 0;
}