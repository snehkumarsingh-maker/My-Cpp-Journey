int b(int a[], int n, int k) {
    int s = 0, e = n - 1;
    while(s <= e) {
        int m = s + (e - s) / 2;
        if(a[m] == k) return m;
        if(a[m] < k) s = m + 1;
        else e = m - 1;
    }
    return -1;
}