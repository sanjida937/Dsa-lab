#include <stdio.h>
#define MAX 100

char str1[MAX], str2[MAX], result[MAX];
int len1, len2;

void create() {
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);
}

void length() {
    int i;

    len1 = 0;
    for (i = 0; str1[i] != '\0'; i++)
        len1++;

    len2 = 0;
    for (i = 0; str2[i] != '\0'; i++)
        len2++;

    printf("Length of first string = %d\n", len1);
    printf("Length of second string = %d\n", len2);
}

void copyString() {
    int i;

    for (i = 0; str1[i] != '\0'; i++)
        result[i] = str1[i];

    result[i] = '\0';

    printf("Copied string = %s\n", result);
}

void concatenate() {
    int i, j;

    for (i = 0; str1[i] != '\0'; i++)
        result[i] = str1[i];

    for (j = 0; str2[j] != '\0'; j++)
        result[i++] = str2[j];

    result[i] = '\0';

    printf("Concatenated string = %s\n", result);
}

void compare() {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            printf("Strings are not equal\n");
            return;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
}

void display() {
    printf("First string  = %s\n", str1);
    printf("Second string = %s\n", str2);
}

int main() {
    int choice;

    create();

    do {
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                length();
                break;

            case 2:
                copyString();
                break;

            case 3:
                concatenate();
                break;

            case 4:
                compare();
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
