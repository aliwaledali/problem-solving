
#include <stdio.h>
#include <string.h>

int main() {
    char remix[201];
    scanf("%s", remix);

    char original[201] = "";
    int len = strlen(remix);
    int i = 0;

    while (i < len) {
        if (i <= len - 3 && strncmp(&remix[i], "WUB", 3) == 0) {
            i += 3; 
            if (original[0] != '\0' && original[strlen(original) - 1] != ' ') {
                strcat(original, " ");
            }
        } else {
            int len = strlen(original);
            original[len] = remix[i];
            original[len + 1] = '\0';
            i++;
        }
    }

    if (original[strlen(original) - 1] == ' ') {
        original[strlen(original) - 1] = '\0';
    }

    printf("%s\n", original);
    return 0;
}
