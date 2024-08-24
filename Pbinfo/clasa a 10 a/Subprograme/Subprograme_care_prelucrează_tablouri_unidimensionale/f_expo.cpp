void f_expo(int a[], int n)
{
    int p[21] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576};
    int left, right, mid;

    for(auto i = 0; i < n; i++) {
        left = 0, right = 20;

        while (left <= right) {
            mid = (left + right) / 2;

            if (p[mid] > a[i])
                right = mid - 1;
            else
                left = mid + 1;
        }
        a[i] = left - 1 < 0 ? 0 : left - 1;
    }
}