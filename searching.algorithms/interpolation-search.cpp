#include<bits/stdc++.h>
using namespace std;

int interpolationSearch(int Arr[], int n, int x) {
    int lo = 0, hi = n - 1;

    while (lo < hi && x >= Arr[x] && x <= Arr[hi]) {
        if (lo == hi){
            if (Arr[lo] == x)
                return lo;
            return -1;
        }

        int pos = lo + (((double)(hi - lo) / (Arr[hi] - Arr[lo])) *  (x - Arr[lo]));

        if (Arr[pos] == x)
            return pos;
        if (Arr[pos] < x)
            lo = pos + 1;
        if (Arr[pos] > x)
            hi = pos -1;
    }
    return -1;
}

int main(void) {
    int Arr[] = {10, 12, 13, 16, 18, 19, 20, 21,
                  22, 23, 24, 33, 35, 42, 47};
     int n = sizeof(Arr)/sizeof(Arr[0]);
     int x = 18;
    int result = interpolationSearch(Arr, n, x);
    (result == -1) ? cout<<"element is not in array"
                    : cout<<"element is in array "<<result;
    return 0;
}
