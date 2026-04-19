#include <stdio.h>

int my_strlen(char str[]) {
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void my_strcat(char dest[], char src[]) {
    int i = 0, j = 0;

    while(dest[i] != '\0') i++;

    while(src[j] != '\0') {
        dest[i] = src[j];
        i++; j++;
    }
    dest[i] = '\0';
}

int main() {
    char a[100], b[100], c[100];

    printf("Enter string 1: ");
    scanf("%s", a);

    printf("Enter string 2: ");
    scanf("%s", b);

    printf("Length of string 1: %d\n", my_strlen(a));

    my_strcpy(c, a);
    printf("Copied string: %s\n", c);

    my_strcat(a, b);
    printf("Concatenated string: %s\n", a);

    return 0;
}