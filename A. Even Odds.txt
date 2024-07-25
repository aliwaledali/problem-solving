#include <stdio.h>

int main() {


    long long n, k;
    
    scanf("%I64d %I64d", &n, &k);

    long long num_odds = (n + 1) / 2;
    
    if (k <= num_odds) {
        printf("%I64d\n", 2 * k - 1);
    } else {
        printf("%I64d\n", 2 * (k - num_odds));
    }

    return 0;
}
