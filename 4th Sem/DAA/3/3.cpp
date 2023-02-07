#include<bits/stdc++.h>
int binarySearch(int k, struct Array a);
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
int main()
{
    struct Array arr;
    int key;
    cout << "Enter size of array" << endl;                                      
    cin >> arr.size;
    cout << "Enter length of array" << endl;
    cin >> arr.length;
    arr.A=new int[arr.length];
    cout << "Enter Sorted array" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cin >> arr.A[i];
    }
    cout << "Enter key element for searching" << endl;
    cin >> key;
    cout << "Your answer is " << binarySearch(key, arr) << endl;
}
int binarySearch(int k, struct Array a)
{
    int l = 0, h = a.length - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (k == a.A[mid])
            return mid;
        else if (k < a.A[mid])
        {
            h = mid - 1;
            return h;
        }
        else
        {
            l = mid + 1;
            return l;
        }
    }
    return -1;
}
// int binarySearchRecursive(int l,int h,int k,struct Array a)
// {
//     int mid = (l + h) / 2;
//     if(l<=h)
//     {
//         if(k==a.A[mid])
//             return mid;
//         else if(k<a.A[mid])
//             return binarySearchRecursive(l, mid - 1, k, a);
//         else
//             return binarySearchRecursive(mid + 1, h, k, a);
//     }
//     return -1;
// }