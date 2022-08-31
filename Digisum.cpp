#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a[10000],sum[10000];
    int n,N;
    cout << "enter how many  you want to insert" << endl;
    cin >> n;
    cout << "Enter elememts" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        N = a[i];

        while (N > 0)
        {
            int d = N % 10;
            sum[i] += d;
            N /= 10;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << endl;
    }

    return 0;
}