#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    long long A[100001];
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        A[i] += A[i - 1];
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;
        cout << A[R] - A[L - 1] << '\n';
    }
    return 0;
}
