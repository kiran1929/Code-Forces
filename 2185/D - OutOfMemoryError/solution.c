#include <stdio.h>
 
long long original[200005];
long long modified[200005];
int modified_indices[200005];
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
 
    while (t--) {
        int n, m;
        long long h;
        scanf("%d %d %lld", &n, &m, &h);
 
        long long orig_max = 0;
        for (int i = 0; i < n; i++) {
            scanf("%lld", &original[i]);
            modified[i] = original[i];
            if (original[i] > orig_max) orig_max = original[i];
        }
 
        long long curr_max = orig_max;
        int list_size = 0;
        static int visited[200005] = {0}; 
 
        for (int i = 0; i < m; i++) {
            int b;
            long long c;
            scanf("%d %lld", &b, &c);
            b--;
 
            if (!visited[b]) {
                modified_indices[list_size++] = b;
                visited[b] = 1;
            }
 
            modified[b] += c;
            if (modified[b] > curr_max) curr_max = modified[b];
 
            if (curr_max > h) {
                for (int j = 0; j < list_size; j++) {
                    int idx = modified_indices[j];
                    modified[idx] = original[idx];
                    visited[idx] = 0;
                }
                list_size = 0;
                curr_max = orig_max;
            }
        }
 
        for (int i = 0; i < n; i++) {
            visited[i] = 0; 
            printf("%lld%c", modified[i], i == n - 1 ? '
' : ' ');
        }
    }
 
    return 0;
}