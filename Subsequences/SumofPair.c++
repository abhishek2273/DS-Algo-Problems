#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void subsequencesSum(int index, vector<int> &v, int s, int sum, int arr[], int n)
{
    if (index == n)
    {
        if (s == sum)
        {
            for (auto it : v)
            {
                cout << it << ' ';
            }
            cout << endl;
        }
        return;
    }
    v.push_back(arr[index]);
    s += arr[index];
    subsequencesSum(index + 1, v, s, sum, arr, n);

    s -= arr[index];
    v.pop_back();
    subsequencesSum(index + 1, v, s, sum, arr, n);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    int sum = 2;
    vector<int> ds;

    subsequencesSum(0, ds, 0, sum, arr, n);
}
