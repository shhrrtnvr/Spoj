#include <bits/stdc++.h>
using namespace std;
#define MX 1000007
int st[MX][26];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &st[i][0]);
    int k = log2(n);
    for (int j = 1; j <= k; j++) 
        for (int i = 0; i + (1 << j) <= n; i++) 
            st[i][j] = min(st[i][j-1], st[i + (1 << (j-1))][j-1]);
    int q; scanf("%d", &q);
    for (int i = 0, l, r; i < q; i++) {
        scanf("%d %d",&l, &r);
        int k = log2(r-l+1);
        printf("%d\n", min(st[l][k], st[r-(1<<k)+1][k]));
    }
    return 0;
}