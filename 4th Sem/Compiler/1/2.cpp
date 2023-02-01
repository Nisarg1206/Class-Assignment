#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter string " << endl;
    cin >> str;

    int state = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i == 0)
        {
            if (str[0] == 'a')
            {
                state = 1;
                break;
            }
            else if (str[0] == 'b' || str[0] == 'c')
            {
                state = 1;
            }
            else
            {
                state = 0;
                break;
            }
        }
        else
        {
            if (str[i] == 'a')
            {
                state = 0;
                break;
            }
            else if (str[i] == 'b' || str[i] == 'c')
            {
                state = 1;
            }
            else
            {
                state = 0;
                break;
            }
        }
    }

    if (state == 1)
    {
        cout << "Accepted" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}