
#include <stdio.h>
 
int main() {
    long long k, n, w;
    
    scanf("%lld %lld %lld", &k, &n, &w);
 
    long long total = k * w * (w + 1) / 2;
 
    if (total > n)
        printf("%lld", total - n);
    else
        printf("0");
 
    return 0;
}