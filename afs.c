#include <stdio.h>

int findFn(int n) {
    int ttl = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            ttl += i;
        }
    }
    return ttl;
}

int findAn(int n) {
    if (n == 0 || n == 1) {
        return 0;
    }
    return findAn(n - 1) + findFn(n);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        printf("%d\n", findAn(N));
    }

    return 0;
}
