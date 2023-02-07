#include <bits/stdc++.h>
using namespace std;

void displayArray(int arr[], int n)
{
    cout << "Array element is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}


void insertionSortAscending(int *arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Insertion Sort
void insertionSortDescending(int *arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Time complexity for insertion sort in ascending array
void TCforInsertionSortA(int *arr, int n)
{
    clock_t start, end;
    start = clock();
    insertionSortAscending(arr, n);
    end = clock();

    double time_takken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time takken by insertion sort of array in ascending order is " << endl<< time_takken<<endl;
}

void TCforInsertionSortD(int *arr, int n)
{
    clock_t start, end;
    start = clock();
    insertionSortDescending(arr, n);
    end = clock();

    double time_takken = (double)(end - start) /(CLOCKS_PER_SEC);
    cout << "Time takken by insertion sort of array in ascending order is " << endl<< time_takken<<endl;
}

void TCforInsertionA(int *arr, int n)
{
    clock_t start, end;
    start = clock();
    insertionSortAscending(arr, n);
    end = clock();

    double time_takken = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time taken is " << time_takken << endl;
}


void TCforInsertionD(int *arr, int n)
{
    clock_t start, end;
    start = clock();
    insertionSortDescending(arr, n);
    end = clock();

    double time_takken = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time taken is " << time_takken << endl;
}


void TCFforInsertionA2(int *arr,int n)
{
    clock_t start, end;
    start = clock();
    insertionSortAscending(arr, n);
    end = clock();

    double time_takken = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "Time taken is " << time_takken << endl;
}


int main()
{
    int p;
    int t = 1;


    int n;
    cout << "Enter index for array" << endl;
    cin >> n;
    int a[n];

    cout << "Array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (t)
    {
        cout << "Enter your choice " << endl;
        cin >> p;


        switch (p)
        {
        case 1:
            displayArray(a, n);
            break;

        case 2:
            insertionSortAscending(a, n);
            break;

        case 3:
            insertionSortDescending(a, n);
            break;

        case 4:
            TCforInsertionSortA(a, n);
            break;

        case 5:
            TCforInsertionSortA(a, n);
            break;

        case 6:
            TCforInsertionD(a, n);
            break;

        case 7:
            TCFforInsertionA2(a, n);

        default:
            break;
        }
        cout << "Do you want to perform more operation" << endl;
        cin >> t;
    }
}
