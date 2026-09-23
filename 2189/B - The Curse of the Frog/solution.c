#include <stdio.h>
 
int main() {
    int T;
    scanf("%d", &T);
 
    while (T--) {
        int n;
        long long x;
        scanf("%d %lld", &n, &x);
 
        long long freeDist = 0;
        long long bestGain = 0;
 
        for (int i = 0; i < n; i++) {
            long long a, b, c;
            scanf("%lld %lld %lld", &a, &b, &c);
 
            if (b > 1) {
                freeDist += (b - 1) * a;
                if (freeDist > x) freeDist = x; 
            }
 
            long long gain = b * a - c;
            if (gain > bestGain)
                bestGain = gain;
        }
 
        if (freeDist >= x) {
            printf("0
");
            continue;
        }
 
        if (bestGain <= 0) {
            printf("-1
");
            continue;
        }
 
        long long remaining = x - freeDist;
        long long ans = (remaining + bestGain - 1) / bestGain;
 
        printf("%lld
", ans);
    }
 
    return 0;
}