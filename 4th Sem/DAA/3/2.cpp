#include <bits/stdc++.h>
using namespace std;

void testON2(int *a, int n,int k1)
{
    int k;
    int max = *max_element(a, a + n);
    int min = *min_element(a, a + n);
    if (min < 0)
    {
        k = max + 2 + (-1) * min;
    }
    else
    {
        k = max + 2;
    }
    int h[k];
    for (int i = 0; i < k; i++)
    {
        h[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= max && a[i] >= 0)
        {
            h[a[i]]++;
        }
        else
        {
            h[a[i] * (-1) + max]++;
        }
    }
    int p;
    if(k>0)
    {
        p=h[k1];
    }
    else
    {
        p = h[max + k1*(-1)];
    }
    if(p>n/2)
    {
        cout << "Occurs N/2 times" << endl;
    }
    else
    {
        cout << "No Occurs N/2 times" << endl;
    }
}

void testON1(int *a, int n,int k)
{
    
}

int main()
{
    int p;
    int n, t = 1;
    cout << "Enter index for array" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cout << "Enter element for searching " << endl;
    cin >> k;
    while (t)
    {
        cout << "Enter your choice " << endl;
        cin >> p;
        switch (p)
        {
            case 1:
            testON2(a, n,k);
            break;

            case 2:
            testON1(a, n,k);
        }

        cout << "Do you want to perform more operation" << endl;
        cin >> t;
    }
}