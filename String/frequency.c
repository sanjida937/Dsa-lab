#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int freq[26] = {0};

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c = %d\n", 'a' + i, freq[i]);
        }
    }

}
