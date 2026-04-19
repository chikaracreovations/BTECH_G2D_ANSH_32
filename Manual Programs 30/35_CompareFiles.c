#include <stdio.h>

int main() {
    FILE *f1, *f2;
    int ch1, ch2;

    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");

    if(f1 == NULL || f2 == NULL) {
        printf("Error opening file");
        return 0;
    }

    do {
        ch1 = fgetc(f1);
        ch2 = fgetc(f2);

        if(ch1 != ch2) {
            printf("Files are NOT same");
            fclose(f1);
            fclose(f2);
            return 0;
        }

    } while(ch1 != EOF && ch2 != EOF);

   
    if(ch1 == ch2)
        printf("Files are SAME");
    else
        printf("Files are NOT same");

    fclose(f1);
    fclose(f2);

    return 0;
}