#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Length of array" << endl;
    cin >> n;
    int a[n];
    cout << "Enter element " << endl;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    int t, p;
    t =p= a[0];
    for (int i = 0; i < n;i++)
    {
        if(a[i]>t)
        {
            t = a[i];
        }
        if(a[i]<p)
        {
            p = a[i];
        }
    }
    cout << "Largest element " << t<<endl;
    cout << "Smallest element " << p<<endl;
}