int permutare(int a[], int n) {
    int f[1001] = {0};
    for (int i = 0; i < n; i++)
        if (a[i] == i + 1 || a[i] > n) return 0;
        else f[a[i]] = 1;
    for (int i = 1; i <= n; i++)
        if (!f[i]) return 0;
    return 1;
}