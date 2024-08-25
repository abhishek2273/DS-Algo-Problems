#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void subsequences(int index, vector<int> &v, int arr[], int n)
{
    if (index == n)
    {
        for (auto it : v)
        {
            cout << it << ' ';
        }
        cout << endl;
        return;
    }
    v.push_back(arr[index]);
    subsequences(index + 1, v, arr, n);

    v.pop_back();
    subsequences(index + 1, v, arr, n);
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    vector<int> v;

    subsequences(0, v, arr, n);
}
