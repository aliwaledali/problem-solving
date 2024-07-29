#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    int last_digit;
    if (n == 0) {
        last_digit = 1;
    } else {
        int cycle[] = {6, 8, 4, 2};
        last_digit = cycle[n % 4];
    }

    printf("%d\n", last_digit);
    return 0;
}
