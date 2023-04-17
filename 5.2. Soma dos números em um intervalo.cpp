#include <iostream>
using namespace std;

int sumRange(int n, int m) {
    if (n == m) {
        return n;
    }
    return n + sumRange(n + 1, m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << sumRange(n, m) << endl;
    return 0;
}

