#include <stdio.h>
void main(int argc, char* argv[]) {
    char c, n[16];
    sprintf(n, "%s.c", argv[0]);
    FILE* f = fopen(n, "r");
    while ((c = fgetc(f)) != EOF) printf("%c", c);
    fclose(f);
}