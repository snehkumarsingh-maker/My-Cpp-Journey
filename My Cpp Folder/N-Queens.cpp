#include <bits/stdc++.h>
using namespace std;


int n, cnt = 0;
vector<int> col;
bool safe(int r, int c) {

    for (int i = 0; i < r; i++)
        if (col[i] == c || abs(col[i] - c) == r - i) return false;
    return true;

}
void solve(int r) {

    if (r == n) {
        if (++cnt == 1)
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) cout << (col[i] == j ? "Q " : ". ");
                cout << "\n";
            }
        return;

    }

    for (int c = 0; c < n; c++)
        if (safe(r, c)) { col[r] = c; solve(r + 1); }



}



int main() {
    cout << "N = "; cin >> n;
    col.assign(n, -1);
    solve(0);
    cout << "Total solutions: " << cnt << "\n";
}