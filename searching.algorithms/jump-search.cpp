
#include <bits/stdc++.h>
using namespace std;

int jumpSearch(int Arr[], int n, int x) {

    int step = sqrt(n);
    int prev = 0;
    while (Arr[min(step, n) - 1] < x) {
        prev = step;
        step++;
        if (prev >= n)
            return -1;
    }

    while (Arr[prev] < x) {
        prev++;
        if (prev == min(step, n))
            return -1;
    }

    if (Arr[prev] == x)
        return prev;
    return -1;
}

int main(void) {
    int Arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610 };
    int x = 55;
    int n = sizeof(Arr) / sizeof(Arr[0]);
    int result = jumpSearch(Arr, n, x);
    (result == -1) ? cout<<"element is not in array"
                    : cout<<"element is in array "<<result;
    return 0;
}
