#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    swap(x, y);
    swap(y, z);
    cout << x << " " << y << " " << z << endl;
}