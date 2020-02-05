#include <bits/stdc++.h>
using namespace std;

int binarySearch(int Arr[], int l, int n, int x) {
    while (l <= n) {

        int m = l + (n - l) / 2;
        if (Arr[m] == x)
            return m;
        if (Arr[m] < x)
            l = m + 1;
        else
            n = m - 1;
    }
    return -1;
}

int main(void) {
    int Arr[] = {1, 2 , 4, 5, 6, 7};
    int x = 5;
    int n = sizeof(Arr) / sizeof(Arr[0]);
    int result = binarySearch(Arr, 0, n - 1, x);
    (result == -1) ? cout<<"element is not in array"
                    : cout<<"element is in array "<<result;
    return 0;
}
