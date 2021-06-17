#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int knapSack(int v[], int w[], int n, int W)
{
    if (W < 0)
        return INT_MIN;
    if (n < 0 || W == 0)
        return 0;
    int in = v[n] + knapSack(v, w, n - 1, W - w[n]);
    int ex = knapSack(v, w, n - 1, W);
    return max(in, ex);
}

int main()
{
    int W = 0;
    int n = 0;
    cout << "enter number of items \n";
    cin >> n;

    int v[n];
    int w[n];
    cout << "enter the weights \n";
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    cout << "enter the values \n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (v[j] > v[j + 1])
            {
                swap(&v[j], &v[j + 1]);
                swap(&w[j], &w[j + 1]);
            }

    cout << "enter capacity of knapsack \n";
    cin >> W;
    cout << "max value is " << knapSack(v, w, n - 1, W);
    return 0;
}
