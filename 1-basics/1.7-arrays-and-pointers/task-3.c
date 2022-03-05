void factorize(int n, int* a, int* b) {
    if (n == 1) {
        *a = 1;
        *b = n;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                *a = i;
                *b = n / i;
                break;
            }
            *a = 1;
            *b = n;
        }
    }
}