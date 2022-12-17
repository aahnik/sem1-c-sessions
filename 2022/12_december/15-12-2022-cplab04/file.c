// reading content from a file, and origin of EOF
#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *ptr;
    char ch;
    ptr = fopen("hello.txt", "r");

    if (ptr == NULL){
        printf("file not found\n");
    }


    do {
        ch = fgetc(ptr);
        printf("%c", ch);

    } while (ch != EOF);

    fclose(ptr);

}