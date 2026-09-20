#include <stdio.h>
int main() 
{
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    long long tiles_length = (n + a - 1) / a;
    long long tiles_width  = (m + a - 1) / a;
    long long total_tiles = tiles_length * tiles_width;
    printf("%lld
", total_tiles);
    
    return 0;
}