#include <stdio.h>
#include <string.h>

int main() {
    char s[100], sub[50];

    fgets(s, sizeof(s), stdin);
    scanf("%s", sub);

    int n = strlen(s);
    int m = strlen(sub);
    int count = 0, j;

    for (int i = 0; i <= n - m; i++) {
        for (j = 0; j < m; j++) {
            if (s[i + j] != sub[j])
                break;
        }

        if (j == m)
            count++;
    }

    printf("Total occurrence: %d", count);

}
