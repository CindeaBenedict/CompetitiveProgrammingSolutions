int NrTriplete(int a[], int n, int S)
{
    sort(a, a + n);

    int result = 0;
    for(int i = 0; i < n - 2; i++) {
        int j = i + 1, k = n - 1;

        while (j < k) {
            if (a[i] + a[j] + a[k] >= S)
                k--;
            else {
                result += (k - j);
                j++;
            }
        }
    }

    return result;
}
