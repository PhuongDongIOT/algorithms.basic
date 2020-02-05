#include <iostream>
using namespace std;
int search(int Arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (Arr[i] == x)
            return i;
    }
    return -1;
}

int main(void) {
    int Arr[] = {1, 2, 4, 5, 7};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    int x = 5;
    int result = search(Arr, n, x);
    (result == -1) ? cout<<"element in not in array"
                    : cout<<"element is index "<<result;
    return 0;
}
