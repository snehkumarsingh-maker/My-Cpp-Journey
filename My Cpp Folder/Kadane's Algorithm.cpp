int k(int a[], int n) {
    int m = a[0], s = 0;
    for(int i = 0; i < n; i++) {
        s += a[i];
        if(s > m) m = s;
        if(s < 0) s = 0;
    }
    return m;
}