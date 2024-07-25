#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    
    if (n == 1 && t == 10) {
        printf("-1");
        return 0;
    }

  
    if (t == 10) {
    
        for (int i = 1; i < n; i++) {
            printf("1");
        }
        printf("0\n");
    } else {
        
        for (int i = 0; i < n; i++) {
            printf("%d", t % 10);
        }
      
    }

    return 0;
}

