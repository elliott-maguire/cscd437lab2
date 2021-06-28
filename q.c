#include <stdio.h>                                  // q.c - a quine in C; authored by Elliott Maguire
void main(int argc, char* argv[]) {                 // Run with `gcc -o q q.c`
    char c, n[16];                                  // (c)haracter, (n)ame (set with a 16-bit boundary)
    sprintf(n, "%s.c", argv[0]);                    // Compose self filename from arguments
    FILE* f = fopen(n, "r");                        // Open self
    while ((c = fgetc(f)) != EOF) printf("%c", c);  // Print self to terminal
    fclose(f);                                      // Close self
}